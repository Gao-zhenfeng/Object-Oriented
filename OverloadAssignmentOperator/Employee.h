#pragma once

#include <iostream>
#include <string>
#include "Date.h"
enum class Gender
{
	male,
	female,
};//枚举类型

class Employee
{
public:
	void setName(std::string name);
	void setGender(Gender gender);
	void setBirthday(Date birthday);
	std::string getName();
	Gender getGender();
	Date getBirthday();
	std::string toString();

	Employee& operator = (const Employee& e);
	//默认构造函数采用委托构造的形式
	Employee();
	Employee(const Employee& e);
	Employee(std::string name, Gender gender, Date birthday);
	~Employee();
private:
	std::string name;
	Gender gender;
	Date* birthday;	//对象指针
	static int numberOfObjects;
};
