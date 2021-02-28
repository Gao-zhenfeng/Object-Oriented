#include <iostream>
#include <string>
#include "Stack.h"

/*
默认类型参数与非类型参数

1.基于Stack类模板，展示默认类型参数
2.基于Stack类模板，展示非类型参数，以及非类型参数的默认值

*/

int main()
{
	Stack<> c; //类模板的声明
	std::string s{ "Hello, World!" };
	for (auto i : s) {
		c.push(i);
	}
	while (c.empty() != true)
	{
		std::cout << c.pop();
	}
	return 0;
}