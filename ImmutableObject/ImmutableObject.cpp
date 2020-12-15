// ImmutableObject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Date.h"
#include "Employee.h"

int main()
{
	Employee e;
	std::cout << e.toString() << std::endl;//default ctor
	//1:setter
	e.setBirthday(Date(1999, 1, 12));
	std::cout << e.toString() << std::endl;
	//2:getter
	e.getBirthday()->setYear(1998);
	std::cout << e.toString() << std::endl;

	return 0;
}