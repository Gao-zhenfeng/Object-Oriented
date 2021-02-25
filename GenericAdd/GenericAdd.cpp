// GenericAdd.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template <typename T, typename S>
auto add(T x, S y)
{
	return (x + y);
}
int main()
{
	std::cout << add(3.0, 2) << std::endl;
	return 0;
}