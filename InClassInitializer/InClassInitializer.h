#pragma once
#include <iostream>

using namespace std;

class InClassInitializer
{
public:
	InClassInitializer();
	~InClassInitializer();

private:
	int a = 1;//������ʼ��
	int b = { 2 };//�����б��ʼ��
	//int c(3);	//���ڲ��������ַ�ʽ�ĳ�ʼ���������������������ƣ�������������
	string  s{ 'H','e','l','l','o' };
	string	s2{ "Hello" };//�б��ʼ��
	string	s3 = "World";

	//int arr1[] = { 1,2,3 }; ����
	int arr2[3]{ 1 };
	//int arr3[]{ 12.0,23.0 };
	//auto  arry4{1,2}; �����ʼ��ʱ���������������ƶ�
};
