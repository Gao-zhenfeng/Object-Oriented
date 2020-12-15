#include <iostream>
using namespace std;
//任务：基类默认构造函数作用
//B: public A

class A
{
public:
	A() { cout << "A()" << endl; }//小心编写基类的默认构造函数
	A(int i) { cout << "A(" << i << ")" << endl; }
private:
};

class B : public A
{
public:
	B() { cout << "B()" << endl; }
	B(int j) : A(j) { cout << "B(" << j << ")" << endl; }
private:
};

int main()
{
	A a1{};
	A a2{ 1 };
	B b1{};
	B b2{ 2 };

	return 0;
}