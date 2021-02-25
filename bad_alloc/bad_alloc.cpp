// bad_alloc.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <exception>
#include <stdexcept>
#include <new>
using std::cout;
using std::endl;

int main()
{
	try {
		for (int i = 0; i < 1000; i++)
		{
			auto* p = new long long int[700000];
			cout << i << "array " << endl;
		}
	}
	catch (std::bad_alloc& e)
	{
		cout << "exception: " << e.what() << endl;
	}

	return 0;
}