// TestVector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <vector>
#include <string>
#include <iostream>
#include "Helper.h"
//using namespace std;
int main()
{
	//用C++11的列表初始化，创建vector对象words1
	std::vector<std::string> words1{ "Hello","World","Welcome","To","C!" };
	PRINT(words1);
	//删除words1最后一个元素
	words1.erase(words1.end() - 1);//end()找到的是最后一个元素后面的位置。得-1
	PRINT(words1);
	//在words1尾部追加元素
	words1.push_back("C++");
	PRINT(words1);
	//用迭代器拷贝words1的内容以创建words2
	std::vector words2(words1.begin(), words1.end());
	PRINT(words2);
	//在words2中插入元素
	words2.insert(words2.begin(), "Hello!");
	PRINT(words2);
	//用拷贝构造创建words3
	std::vector words3(words2);//C++17后才引入模板类参数类型的自动推导，即才能自动推测vector后面所跟的类型参数
	PRINT(words3);
	//用[]修改words3的元素
	words3[5] = "C Plus Plus";
	PRINT(words3);

	//创建words4，初始化为多个相同的字串
	std::vector<std::string> words4(4, "C++");
	PRINT(words4);
	//word3 与words4交换
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);

	return 0;
}