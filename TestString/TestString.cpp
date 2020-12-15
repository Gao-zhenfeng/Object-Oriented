// TestString.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;

std::vector<std::string> splitWithStl(const std::string& str, const std::string& pattern)
{
	std::vector<std::string> resVec;

	if ("" == str)
	{
		return resVec;
	}
	//方便截取最后一段数据
	std::string strs = str + pattern;

	size_t pos = strs.find(pattern);
	size_t size = strs.size();

	while (pos != std::string::npos)
	{
		std::string x = strs.substr(0, pos);
		resVec.push_back(x);
		strs = strs.substr(pos + 1, size);
		pos = strs.find(pattern);
	}

	return resVec;
}

int main()
{
	//创建字符串
	string s = "Hello";
	//string s {"Hello"};
	//clear
	s.clear();
	//用数组为字符串赋值
	char arr[]{ 'w','o','r','l','d','\0' };
	s += arr;
	//assign（）
	s.assign("Hello World");
	cout << "s is : " << s << endl;
	//append
	s.append("     ");
	//s.append(5, ' ');
	s.append("!");
	//insert 空白
	s.insert(0, "   ");
	//移除字符串前面的空白
	s.erase(0, s.find_first_not_of(" \t\n\r"));
	//移除字符串后面的空白
	cout << s << endl;
	cout << s.length() << endl;
	cout << "!'s pos is: " << s.find('!') << endl;
	cout << s.find_last_of(" /t/n") << endl;
	s.erase(s.find('d') + 1, 5);
	//把字符串转化为整数或浮点数

	cout << s << endl;

	s.assign("255,255,0");
	vector<string> rec = splitWithStl(s, ",");

	return 0;
}