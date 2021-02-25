// noexcept.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//任务1： 编写函数， 展示作为声明符的noexcept, noexcept(true), noexcept(false) 的区别
//任务2： 展示noexcept不能区分重载
//任务3： 在noexcept函数中抛出异常
//任务4： 展示noexcept作为运算符的效果

#include <iostream>
using namespace std;

void foo() noexcept { throw 1; } //noexcept 不能区分重载函数
//void foo() {}
void tao() noexcept(1) {}
void zen() noexcept(1 - 1) {}

int main()
{
	cout << "foo() noexcept : " << noexcept(foo()) << "\n"
		<< "foo() : " << noexcept(foo()) << "\n"
		<< "tao() noexcept(1) : " << noexcept(tao()) << "\n"
		<< "zen() noexcept(1 - 1) : " << noexcept(zen()) << "\n";
	cout << "Calling foo() noexcept {throw 1;} ";
	foo();
	return 0;
}