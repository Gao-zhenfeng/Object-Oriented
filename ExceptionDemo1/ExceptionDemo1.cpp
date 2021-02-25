// ExceptionDemo1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//使用if语句被0除
//展示使用异常处理解决被零除的问题
//在MSys2 Gcc下展示被0除的代码运行结果

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main()
{
	int x{ 0 }, y{ 0 };
	cin >> x >> y;
	try
	{
		if (y == 0)
			throw y;
		cout << x / y << endl;
	}
	catch (int& e)
	{
		cout << "the second number is :" << e << endl;
	}

	return 0;
}