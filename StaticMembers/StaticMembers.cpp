// StaticMembers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//通过类名/对象名调用静态成员

#include <iostream>
#include "Square.h"
using namespace std;

int Square::numberOfObjects = 10;
int main()
{
	Square s1;
	cout << s1.getSide() << endl;
	cout << s1.getNumberOfObjects() << endl;
	Square s2{ 5.0 };
	cout << Square::getNumberOfObjects() << endl;
	cout << "non static member" << s2.getNumberOfObjectsNoneStatic() << endl;
	//cout << "non static member" << Square::getNumberOfObjectsNoneStatic() << endl;////非静态成员函数的非法调用

	return 0;
}