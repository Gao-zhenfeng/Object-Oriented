// DequeDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	double values[] = { 1,2,3,4,5,6,7,8,9 };
	//构造deque，用迭代器[begin, end)间的元素初始化deque
	deque<double> Deque(values, values + 7);
	cout << "Inital contents in doubleDeque: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	//顺序容器： assign(n, elem)将n份元素拷贝赋值给容器
	Deque.assign(4, 11.2);
	cout << endl << "After assign: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	//deque/vector中特有的：at(index)返回指定位置的元素
	Deque.at(0) = 22.4;
	cout << endl << "After at: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	deque<double>::iterator itr = Deque.begin();
	//顺序容器：insert(position, elem)将元素插入指定位置
	Deque.insert(itr + 1, 555);
	//Deque.insert(itr + 1, 666);//Error! Unexpected Behavior
	//！！警告！！调用deque的insert之后，所有的迭代器都【必然】失效！

	itr = Deque.begin();//重新获取迭代器
	Deque.insert(itr + 1, 666);
	cout << endl << "After insert: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	//一级容器：eraser(begin, end)删除指定迭代器范围的元素
	itr = Deque.begin();//重新获取迭代器
	Deque.erase(itr + 2, itr + 4);
	//!!!警告！！！调用deque的eraser之后，所有迭代器都【可能】失效！

	cout << endl << "After eraser: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	//deque/list特有：push_front(elem)，将元素压入队头
	Deque.push_front(10.10);//10.10
	Deque.push_front(20.00);//
	Deque.push_front(0.10);//0.10,20.00,10.10
	cout << endl << "After push_front: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	//deque/list特有：pop_front(elem)，删除队首元素
	Deque.pop_front();
	cout << endl << "After pop_front: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}
	//顺序容器：pop_back()删除容器尾元素
	Deque.pop_back();
	cout << endl << "After pop_back: ";
	for (unsigned int i = 0; i < Deque.size(); i++)
	{
		cout << Deque[i] << " ";
	}

	return 0;
}