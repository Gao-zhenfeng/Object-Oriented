// BinaryIO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>

int main()
{
	namespace fs = std::filesystem;
	using io = std::ios;
	fs::path p{ "array.dat" };
	//创建二进制输出流
	std::fstream out{ p, io::out | io::app };
	//判断流是否成功打开
	if (!out.is_open())
	{
		std::cout << "can't open this file " << std::endl;
		return 0;
	}
	//将一个整形数组的内容输出到二进制文件中
	std::array a{ 21L, 42L, 63L };
	std::streamsize size = static_cast<std::streamsize> (a.size()) * sizeof(a[0]);
	out.write(reinterpret_cast<char*> (&a[0]), size);
	//以读取模式重新打开二进制文件，或者将光标冲新定位在文件头	 fstream::seekg()
	out.close();
	out.open(p, io::in);

	//从二进制流中读入一个整数并显示在屏幕上
	auto x{ 0L };
	out.read(reinterpret_cast<char*> (&x), sizeof(x));
	std::cout << x << std::endl;
}