// 任务1：增加静态成员，计算雇员对象的数量
// 任务2：将雇员类的生日改为Date*类型的指针
// 任务3：修改构造函数和析构函数
#include <iostream>
#include <string>
enum class Gender {
  male ,
  female ,
};
class Employee {
private:
  std::string name;
  Gender gender;
  Date* birthday;
  static int numberOfObjects;
public:
  void setName(std::string name) { this->name = name; }
  void setGender(Gender gender) { this->gender = gender; }
  void setBirthday(Date birthday) { *(this->birthday) = birthday; }
  std::string getName() { return name; }
  Gender getGender() { return gender; }
  Date getBirthday() { return *birthday; }
  std::string toString() {
    return (name + (gender == Gender::male ? std::string("male") : std::string("female")) + birthday->toString());
  }
  Employee(std::string name , Gender gender , Date birthday) :name{ name } , gender{ gender } {
    numberOfObjects++;
    this->birthday = new Date{ birthday };
    std::cout << "Now there are : " << numberOfObjects << " employees" << std::endl;
  }
  Employee() : Employee("Alan" , Gender::male , Date(2000 , 4 , 1)) {}
  ~Employee() {
    numberOfObjects--;
    delete birthday;
    birthday = nullptr;
    std::cout << "Now there are : " << numberOfObjects << " employees" << std::endl;
  }
};