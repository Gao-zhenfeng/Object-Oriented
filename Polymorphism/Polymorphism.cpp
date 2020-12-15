//assignment 1 : 创建 A/B/C三个类，B继承A，C继承B，A、B、C均有toString()

//assignment 2 : 创建 print（），接受A类型参数，调用A对象的toString()

//assignment 3 : 重载 print（），接受B/C类型参数，调用toString()

#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	virtual string toString() { return "A"; }
};

class B : public A
{
public:
	string toString() override { return "B"; }
};

class C : public B
{
public:
	string toString() override { return "C"; }
};

void print(A* o)
{
	cout << o->toString() << endl;
}
void print(A& o)
{
	cout << o.toString() << endl;
}

int main()
{
	A a1;
	B b;
	C c;
	B* b2;
	b2 = &c;
	print(&a1);
	print(&b);
	print(&c);

	print(a1);
	print(b2);
	print(c);

	return 0;
}