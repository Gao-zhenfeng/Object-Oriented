#include <iostream>
using namespace std;
//���񣺻���Ĭ�Ϲ��캯������
//B: public A

class A
{
public:
	A() { cout << "A()" << endl; }//С�ı�д�����Ĭ�Ϲ��캯��
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