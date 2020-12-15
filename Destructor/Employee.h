#pragma once
//任务1：增加静态成员，计算雇员对象的数量
//任务2：将雇员类的生日改为Date*类型的指针
//任务3：修改构造函数和析构函数

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
	Employee();
	Employee(std::string name, Gender gender, Date birthday);
	~Employee();

private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
};
