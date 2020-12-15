// Destructor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//任务4：在堆和栈（函数作用域和内嵌作用域）上分别创建Employee对象，观察析构函数的行为

#include <iostream>
#include "Date.h"
#include "Employee.h"

int Employee::numberOfObjects = 0;
int main()
{
	Employee e1;
	std::cout << e1.toString() << std::endl;
	Employee* e2 = new Employee("John", Gender::male, Date(1999, 10, 12));
	std::cout << e2->toString() << std::endl;

	{
		Employee e3{ "Alice",Gender::female,{1989,2,14} };
		//e3的生存期只在大括号内
		std::cout << e3.toString() << std::endl;
	}
	delete e2;
	return 0;
}