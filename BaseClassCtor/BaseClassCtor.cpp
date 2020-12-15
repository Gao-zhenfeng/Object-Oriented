#include <iostream>
using std::cout;
using std::endl;

//任务1：继承构造函数
//      创建基类B及构造函数B(int),B(char)和派生类D;D中比继承/继承B的CTOR时的效果

//任务2：派生类中调用基类构造函数
//		D中增加成员double x;及D(double), 在D(double)初始化列表调用B(i)并初始化x

//任务3：派生类先调基类CTOR，再构造内嵌对象
//	增加类E及E(int)，并在D中加入E两个对象；创建D对象观察E ctor和B ctor次序

class B
{
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c) { cout << "B(" << c << ")" << endl; }
private:
};

class E
{
public:
	E() { cout << "E()" << endl; }

private:
};
class D : public B
{
public:
	using B::B;//继承基类全部构造函数
	//D():B(){}
	//D(int i)
	//D(char c)
	D() = default;
	D(double x) :e1{}, e2{}, B(static_cast<int> (x)), x{ 1.0 } {cout << "D(" << x << ")" << endl; }
	//先调基类构造函数，在对E的对象做初始化，最后执行括号内语句
private:
	double x{ 0.0 };
	E e1, e2;
};

int main()
{
	//B b;
	D d;//调用D的默认构造函数，D的defaule ctor初始化列表先调用基类B的ctor，之后构造子对象e1, e2
	D d2{ 3.01 };
	//D d3{ 's' };
	return 0;
}