import <iostream>;
import <string>;
import module1;

export module module2;
export enum class Gender;
export class Employee;


enum class Gender {
	male,
	female,
};

class Employee {
private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
public:
	void setName(std::string name);
	void setGender(Gender gender);
	void setBirthday(Date birthday);
	std::string getName();
	Gender      getGender();
	Date        getBirthday();
	std::string toString();
	Employee(std::string name, Gender gender, Date birthday);
	Employee();
	Employee(const Employee& e);
	Employee& operator = (const Employee& e);
	~Employee();
};
