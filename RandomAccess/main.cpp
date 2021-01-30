//演示如何随机存取文件
//任务一： 从文件中存两个long long int 和“ Hello World”字符串
//任务二： 从文件中读取Hello字符串

//C++17编译

#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>
#include <vector>

namespace fs = std::filesystem;
using std::endl;
using std::cout;
using std::fstream;

int main()
{
	//任务一： 从文件中存两个long long int 和“ Hello World”字符串
	fs::path p{ "test.dat" };

	fstream file{ p, std::ios::out | std::ios::in | std::ios::trunc };
	auto x{ 12LL }, y{ 24LL };
	char str[]{ "Hello World" };
	file.write(reinterpret_cast<char*>(&x), sizeof(x));
	file.write(reinterpret_cast<char*>(&y), sizeof(y));
	file.write(str, sizeof(str));

	//任务二：从文件中读取Hello字符串
	char buff[100]{ 0 };
	file.seekg(2 * sizeof(long long int), std::ios::beg);
	file.read(buff, 5);

	cout << buff << endl;

	return 0;
}