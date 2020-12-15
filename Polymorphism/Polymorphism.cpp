//assignment 1 : ���� A/B/C�����࣬B�̳�A��C�̳�B��A��B��C����toString()

//assignment 2 : ���� print����������A���Ͳ���������A�����toString()

//assignment 3 : ���� print����������B/C���Ͳ���������toString()

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