#include <iostream>
using std::cout;
using std::endl;

//����1���̳й��캯��
//      ��������B�����캯��B(int),B(char)��������D;D�бȼ̳�/�̳�B��CTORʱ��Ч��

//����2���������е��û��๹�캯��
//		D�����ӳ�Աdouble x;��D(double), ��D(double)��ʼ���б����B(i)����ʼ��x

//����3���������ȵ�����CTOR���ٹ�����Ƕ����
//	������E��E(int)������D�м���E�������󣻴���D����۲�E ctor��B ctor����

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
	using B::B;//�̳л���ȫ�����캯��
	//D():B(){}
	//D(int i)
	//D(char c)
	D() = default;
	D(double x) :e1{}, e2{}, B(static_cast<int> (x)), x{ 1.0 } {cout << "D(" << x << ")" << endl; }
	//�ȵ����๹�캯�����ڶ�E�Ķ�������ʼ�������ִ�����������
private:
	double x{ 0.0 };
	E e1, e2;
};

int main()
{
	//B b;
	D d;//����D��Ĭ�Ϲ��캯����D��defaule ctor��ʼ���б��ȵ��û���B��ctor��֮�����Ӷ���e1, e2
	D d2{ 3.01 };
	//D d3{ 's' };
	return 0;
}