#include <iostream>
#include <filesystem>
#include <string>
using std::cout;
using std::endl;

int main()
{
	namespace fs = std::filesystem;
	//定义路径，使用RAW字符串、转义字符串、正斜杠字符串
	fs::path p1{ "E:\Program\C++练习\class_exe\CheckPath\Hello.txt" };
	fs::path p2{ R"(E:\Program\C++练习\class_exe\CheckPath)" };
	fs::path p3{ "E:/Program/C++练习/class_exe/CheckPath/Hello.txt" };

	//输出默认文件分隔符
	cout << "file separator is : " << fs::path::preferred_separator << endl;
	//判断是否是常规文件，如果是，输出文件大小
	if (fs::is_regular_file(p2))
	{
		cout << p2 << "s size is : " << fs::file_size(p2) << endl;
	}
	else if (fs::is_directory(p2)) //判断是否是目录，如果是目录，列出其子目录
	{
		cout << p2 << "is a directory, includes : " << endl;
		for (auto& e : fs::directory_iterator(p2)) {
			cout << "  " << e.path() << endl;
		}
	}
	//判断路径是否存在
	else if (fs::exists(p2))
	{
		cout << p2 << " is a special file" << endl;
	}
	else
	{
		cout << p2 << " does not exist" << endl;
	}

	return 0;
}