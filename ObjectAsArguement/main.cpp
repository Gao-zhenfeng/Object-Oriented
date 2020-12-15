#include <iostream>
#include "Circle.h"
using namespace std;

//void print(Circle c)
//{
//	cout << c.getArea() << endl;
//
//}
void print(Circle& c)	//比上面那个函数效率高一点
{
	cout << c.getArea() << endl;
}

void print(Circle* c)
{
	cout << c->getArea() << endl;
}

int main()
{
	Circle ca[]{ 1.0,2.0,3.0 };
	print(ca[1]);//以对象的方式直接传参，不把第一个函数注释掉，编译器不知道调用哪个重载函数
	print(ca[2]);
	print(ca + 2);	//以指针的方法直接传参

	return 0;
}