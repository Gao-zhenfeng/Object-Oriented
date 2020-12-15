#pragma once

#include <iostream>
#include <string>
#include "Date.h"
enum class Gender
{
	male,
	female,
};//ö������
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
	//Ĭ�Ϲ��캯������ί�й������ʽ
	Employee();
	Employee(const Employee& e);
	Employee(std::string name, Gender gender, Date birthday);
	~Employee();
private:
	std::string name;
	Gender gender;
	Date* birthday;	//����ָ��
	static int numberOfObjects;
};
