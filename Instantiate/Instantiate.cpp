// Instantiate.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std::string_literals;

//函数模板定义
template <typename T>
T Max(T x, T y)
{
	return (x > y ? x : y);
}
//显示实例化：整数
//template <int> int Max(int, int);

int main()
{
	//调用显示实例化函数
	std::cout << "Max(1,2) : " << Max(1, 2) << std::endl;
	//浮点数实例化
	std::cout << "Max(2.9, 1.0) : " << Max(2.9, 1.0) << std::endl;
	//字符实例化
	std::cout << "Max('A', 'D') : " << Max('A', 'D') << std::endl;

	//字符串字面量实例化
	std::cout << R"(Max("ABC", "BCD") : )" << Max("ABC", "BCD") << std::endl;//"ABC"是const char* 类型，实际上比较的是指针地址，“ABC”地址大
	std::cout << R"(Max("BCD", "ABC") : )" << Max("BCD", "ABC") << std::endl;//编译器问题，"ABC" "BCD"复用了

	//std::string类型实例化
	std::cout << R"(Max("ABC"s, "BCD") : )" << Max("ABC"s, "BCD"s) << std::endl;//字符串字面量
	std::cout << R"(Max("BCD"s, "ABC") : )" << Max("BCD"s, "ABC"s) << std::endl;//字符串字面量

	//名字空间冲突问题
	//某个库里有max（）可能会冲突
	return 0;
}