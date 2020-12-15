#pragma once
//����1�����Ӿ�̬��Ա�������Ա���������
//����2������Ա������ո�ΪDate*���͵�ָ��
//����3���޸Ĺ��캯������������

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
	Employee();
	Employee(std::string name, Gender gender, Date birthday);
	~Employee();

private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfObjects;
};
