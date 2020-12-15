// Constexpr.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <array>
#include <cassert>	//使用assert断言必须包含头文件

using std::cout;
using std::endl;

//assignment 1：用递归计算factorial，用assert检查3 的阶乘
//assignment 2：将factorial变成常量表达式，用static_assert检查3的阶乘
//assignment 3：创建factorial（4）大小的数组

constexpr int factorial(int n)
{
	if (n == 0)
		return 1;
	else
	{
		return n * factorial(n - 1);
	}
}
int main()
{
	static_assert(factorial(4) == 24, "factorial(3) shoule be 24");
	std::array<int, factorial(4)> a;
	cout << a.size() << endl;

	return 0;
}