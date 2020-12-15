#pragma once
#include <iostream>

using namespace std;

class InClassInitializer
{
public:
	InClassInitializer();
	~InClassInitializer();

private:
	int a = 1;//拷贝初始化
	int b = { 2 };//拷贝列表初始化
	//int c(3);	//类内不允许这种方式的初始化，（）跟函数调用类似，编译器造成误解
	string  s{ 'H','e','l','l','o' };
	string	s2{ "Hello" };//列表初始化
	string	s3 = "World";

	//int arr1[] = { 1,2,3 }; 数组
	int arr2[3]{ 1 };
	//int arr3[]{ 12.0,23.0 };
	//auto  arry4{1,2}; 数组初始化时不能做数据类型推断
};
