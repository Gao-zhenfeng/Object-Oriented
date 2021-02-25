// RethrowException.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <exception>
#include <stdexcept>
using std::cout;
using std::endl;

void f();

int main()
{
	try
	{
		f();
	}
	catch (const std::exception& e)
	{
		cout << "catched exception : " << e.what() << endl;
	}

	return 0;
}

void f()
{
	try
	{
		throw std::logic_error("Throw in f()");
	}
	catch (const std::exception& e)
	{
		cout << "catched in f()" << endl;
		cout << "exception : " << e.what() << endl;
		throw;
	}
}