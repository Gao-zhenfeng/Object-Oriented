// Propgate.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
异常传播

任务1： 编写异常传播的演示代码
		3个异常类
		3个函数：包含try-catch
任务2： 调试模式展示异常传播的流程
		vs中打开“调用堆栈”，观察变化

*/

#include <iostream>
using std::cout;
using std::endl;

class Exception1 {};
class Exception2 {};
class Exception3 {};

void f1();
void f2();
void f3();

int main()
{
	try
	{
		f1();
		cout << "main\n";
	}
	catch (const std::exception& e)
	{
		cout << "catch f1()\n";
	}
	return 0;
}

void f1()
{
	try
	{
		f2();
		cout << "f1\n";
	}
	catch (const Exception1& e)
	{
		cout << "catch f2()\n";
	}
}
void f2()
{
	try
	{
		f3();
		cout << "f2\n";
	}
	catch (const Exception2& e)
	{
		cout << "catch f3()\n";
	}
}
void f3()
{
	throw Exception1();
}