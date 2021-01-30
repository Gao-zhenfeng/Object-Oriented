// OverloadAssignmentOperator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//展示重载赋值运算符
//1. 在Employee中重载赋值运算符
//2. 在主函数中调用重载的赋值运算符

#include <iostream>
#include "Employee.h"
#include "Date.h"
using std::cout;
using std::endl;

int Employee::numberOfObjects = 0;//err:LINK2001

int main()
{
	Employee e1{ "Alex",Gender::male,Date{1999,1,12} };
	Employee e2{ e1 };//deep copy
	//Employee e3 = e1;//deep copy
	//e3.setName("Trumph");
	e1.setBirthday(Date{ 2021,1,29 });
	std::cout << "e1 " << e1.toString() << std::endl;
	std::cout << "e2 " << e2.toString() << std::endl;

	Employee e3 = e1;//调用重载的幅值运算符

	Employee e4;
	e4 = e3;//调用重载的幅值运算符
	e3.setBirthday(Date{ 2000,0,0 });
	std::cout << "e3 " << e3.toString() << std::endl;
	std::cout << "e4 " << e4.toString() << std::endl;

	return 0;
}