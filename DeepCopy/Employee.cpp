#include <iostream>
#include "Date.h"
#include "Employee.h"

void Employee::setName(std::string name) { this->name = name; }
void Employee::setGender(Gender gender) { this->gender = gender; }
void Employee::setBirthday(Date birthday) { *(this->birthday) = birthday; }
std::string Employee::getName() { return name; }
Gender Employee::getGender() { return gender; }
Date Employee::getBirthday() { return *birthday; }
std::string Employee::toString()
{
	return name + (gender == Gender::male ? std::string(" male ") : std::string(" female ")) + birthday->toString();
}
//默认构造函数采用委托构造的形式
Employee::Employee() :Employee("Alan", Gender::male, Date(2000, 01, 01)) {}
Employee::Employee(const Employee& e)	//自己定制拷贝构造 函数
{
	this->birthday = new Date{ *(e.birthday) };//e.birthday是一个指针，需要解引用
	this->gender = e.gender;
	this->name = e.name;
	numberOfObjects++;
}
Employee::Employee(std::string name, Gender gender, Date birthday) : name{ name }, gender{ gender }
{
	numberOfObjects++;
	this->birthday = new Date{ birthday };//调用Date类里的拷贝构造函数，在堆中创建对象，该对象是指针类型的
	std::cout << "Now there are : " << numberOfObjects << " employees" << std::endl;
}
Employee::~Employee()
{
	numberOfObjects--;
	delete birthday;
	birthday = nullptr;
	std::cout << "Now there are : " << numberOfObjects << "employees" << std::endl;
}