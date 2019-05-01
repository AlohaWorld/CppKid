#include "Employee.h"

void Employee::setName(std::string name) {
  this->name = name;
}

void Employee::setGender(Gender gender) {
  this->gender = gender;
}

void Employee::setBirthday(Date birthday) {
  *(this->birthday) = birthday;
}

std::string Employee::getName() {
  return name;
}

Gender Employee::getGender() {
  return gender;
}
Date Employee::getBirthday() {
  return *birthday;
}
std::string Employee::toString() {
  return (name + (gender == Gender::male
                  ? std::string("male")
                  : std::string("female"))
          + birthday->toString());
}
Employee::Employee(std::string name , Gender gender , Date birthday)
  :name{ name } , gender{ gender } {
  numberOfObjects++;
  this->birthday = new Date{ birthday };
  std::cout << "Now there are : "
    << numberOfObjects
    << " employees"
    << std::endl;
}

Employee::Employee()
  : Employee("Alan" , Gender::male , Date(2000 , 4 , 1)) {
}

Employee::Employee(const Employee & e) {
  this->birthday = new Date{ *(e.birthday) };
  this->name = e.name;
  this->gender = e.gender;
  numberOfObjects++;
}

Employee& Employee::operator = (const Employee & e) {
  this->name = e.name;
  this->gender = e.gender;
  *(this->birthday) = *(e.birthday);
  return (*this);
}

Employee::~Employee() {
  numberOfObjects--;
  delete birthday;
  birthday = nullptr;
  std::cout << "Now there are : " << numberOfObjects << " employees" << std::endl;
}