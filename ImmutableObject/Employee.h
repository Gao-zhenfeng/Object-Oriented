#pragma once
//任务2：定义Gender枚举类型
//任务3：定义Employee 类

#include <iostream>
#include <string>
enum class Gender
{
	male,
	female,
};//枚举类型
class Employee
{
public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { this->birthday = birthday; }
	std::string getName() { return name; }
	Gender getGender() { return gender; }
	Date* getBirthday() { return &birthday; }
	std::string toString()
	{
		return name + (gender == Gender::male ? std::string(" male ") : std::string(" female ")) + birthday.toString();
	}
	//默认构造函数采用委托构造的形式
	Employee() :Employee("Alan", Gender::male, Date(1999, 01, 12)) {}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender },
		birthday(birthday){}

private:
	std::string name;
	Gender gender;
	Date birthday;
};
