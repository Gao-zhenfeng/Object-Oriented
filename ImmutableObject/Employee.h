#pragma once
//����2������Genderö������
//����3������Employee ��

#include <iostream>
#include <string>
enum class Gender
{
	male,
	female,
};//ö������
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
	//Ĭ�Ϲ��캯������ί�й������ʽ
	Employee() :Employee("Alan", Gender::male, Date(1999, 01, 12)) {}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender },
		birthday(birthday){}

private:
	std::string name;
	Gender gender;
	Date birthday;
};
