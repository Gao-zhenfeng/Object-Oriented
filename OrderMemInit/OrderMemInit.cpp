// OrderMemInit.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int x = 0;
class S
{
public:
	int n = ++x;//default initializer
	S() {}	//使用就地初始化
	S(int arg) :n(arg) {}

private:
};

int main()
{
	cout << x << endl;//0
	S s1;			  //无参构造函数，进行就地初始化，
	cout << x << endl;//1,就地初始化
	S s2(7);
	cout << x << endl;//1，就地初始化没有运行
}