#include <iostream>
#include <string>
#include "Stack.h"

int main()
{
	Stack<char> c; //类模板的声明
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