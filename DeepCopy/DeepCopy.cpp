// DeepCopy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//任务1：构造Employee对象e1，拷贝构造e2
//任务2：调试模式观察e1和e2的birthday成员
//任务3：添加拷贝构造函数实现深拷贝
//任务4：调试模式观察e1和e2的birthday成员

#include <iostream>
#include "Employee.h"
#include "Date.h"
int Employee::numberOfObjects = 0;//err:LINK2001

int main()
{
	Employee e1{ "Alex",Gender::male,Date{1999,1,1} };
	Employee e2{ e1 };//deep copy
	//Employee e3 = e1;//deep copy
	//e3.setName("Trumph");

	std::cout << e1.toString() << std::endl;
	std::cout << e2.toString() << std::endl;

	return 0;
}