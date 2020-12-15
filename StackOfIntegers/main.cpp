// StackOfIntegers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//任务2：创建Stack对象，展示入栈出栈操作

#include <iostream>
#include <cassert>
#include "StackOfIntegers.h"

int main()
{
	StackOfIntegers s1{};
	for (int i = 0; i < 5; i++)
	{
		s1.push(i + 1);
	}
	std::cout << "Stack size = :" << s1.getSize() << std::endl;
	std::cout << "Top element is :" << s1.peek() << std::endl;
	const int size = s1.getSize();
	for (int i = 0; i < size; i++) {
		std::cout << s1.pop() << " " << std::endl;
	}
	std::cout << "Stack now is empty : " << s1.empty() << std::endl;
	return 0;
}