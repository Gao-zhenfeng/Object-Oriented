// BufferedIO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
本部分要展示的内容如下：
1.键盘书入一个字母后回车，实际进入缓冲区的是两个字符
2.使用cin输入信息后， 有换行字符留在缓冲区，从而导致return语句前的cin.get()不起作用
*/

#include <iostream>

int main()
{
	//拿到cin对象的缓冲区指针
	auto p = std::cin.rdbuf();
	//从键盘读入字符到缓冲区，保留所有字符在缓冲区 peek():仅读出但不取走一个字符
	auto x = std::cin.peek();
	std::cout << "x = " << x << std::endl;
	//显示缓冲区中的字符数量
	std::cout << "There are " << p->in_avail() << " characters in the buffer." << std::endl;
	//unsigned int num = p->in_avail();
	//把缓冲去的字符都取出来并显示
	for (unsigned int i = 0; i < p->in_avail(); i++) {
		std::cout << i + 1 << ": " << std::cin.get() << std::endl;
	}
	std::cin.get();
	std::cin.get();

	return 0;
}