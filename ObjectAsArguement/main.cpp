#include <iostream>
#include "Circle.h"
using namespace std;

//void print(Circle c)
//{
//	cout << c.getArea() << endl;
//
//}
void print(Circle& c)	//�������Ǹ�����Ч�ʸ�һ��
{
	cout << c.getArea() << endl;
}

void print(Circle* c)
{
	cout << c->getArea() << endl;
}

int main()
{
	Circle ca[]{ 1.0,2.0,3.0 };
	print(ca[1]);//�Զ���ķ�ʽֱ�Ӵ��Σ����ѵ�һ������ע�͵�����������֪�������ĸ����غ���
	print(ca[2]);
	print(ca + 2);	//��ָ��ķ���ֱ�Ӵ���

	return 0;
}