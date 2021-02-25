// Test9_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdlib>
#include <limits>
#include <exception>
#include "MyComplex.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
	MyComplex z1, z2;
	std::cin >> z1;
	std::cin >> z2;
	try {
		std::cout << "z1 + z2 = " << z1 + z2 << std::endl;
		std::cout << "z1 - z2 + z1 = " << z1 - z2 + z1 << std::endl;
		std::cout << "z1 * z2 - z1 = " << z1 * z2 - z1 << std::endl;
		std::cout << "z1 / z2 + z1 = ";
		std::cout << z1 / z2 + z1 << std::endl;
		std::cout << "z2 - z1 / z1 = ";  // 本语句不可与下一句放在一起
		// 否则异常时的输出信息依赖于系统库实现
		std::cout << z2 - z1 / z1 << std::endl;
		std::cout << "Finished";
	}
	catch (std::exception& e) {  // catch父类异常类型，也可以捕获子类异常
		std::cout << e.what()
			<< std::endl;  // what()函数将存放在异常对象中的信息取出来
		std::cout << "Unexpected Error";
	}

	// GCC及VC编译器在调试模式下会暂停，便于查看运行结果
#if (defined(__DEBUG__) || defined(_DEBUG))
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.get();
#endif
	return 0;
}