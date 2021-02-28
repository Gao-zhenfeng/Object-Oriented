// Test10_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
1. 从标准输入读入一些整数存入deque中。

  1.1 整数可能有正有负

  1.2 遇到非整数输入（例如字母）时就停止读入

  1.3 这些整数，可能由空格分隔，也可能由回车分隔

2. 如果是奇数，则从头部放到deque中，如果是偶数，则从队尾放到deque中

  2.1 例如，按顺序输入 9, 3, 6, 2, 3, 8 ,7, 0, x ，每个数字/字母输入后均有回车，则在输入字母x后程序停止读入数据

  2.2 存入deque后，为： 队头->  7 3 3 9 6 2 8 0  <-队尾

3. 将deque中的数据的顺序反转后存入list1

  3.1 续上例，deque中的数据为：队头->  7 3 3 9 6 2 8 0  <-队尾

  3.2 则deque的数据翻转存入list1后： 0 8 2 6 9 3 3 7

4. 将deque和list1中对应位置的元素做运算，然后按照相应的次序存入另外一个list2

  4.1 续上例，deque中的数据为： 队头->  7 3 3 9 6 2 8 0  <-队尾

  4.2 续上例，list1中的数据为： 0 8 2 6 9 3 3 7

  4.2 则deque与list1中的对应数据相乘并存入list2后： 0 24 6 54 54 6 24 0

5. 将list2 中的数据按序输出，两个整数之间使用一个空格分隔（最后一个整数后面没有空格），输出之后，不要换行。

6. 注意考虑负数奇偶性的判断

输入格式:

由空格或者回车分隔的多个整数

输出格式：

多个整数，两个相邻整数间有一个空格。最后一个整数后面【没有】任何空格，也没有回车

输入样例：

9 4 2 5 9

2 0 x

输出样例：
0 10 18 16 18 10 0

*/

#include <iostream>
#include <deque>
#include <list>
#include<algorithm>

using namespace std;

int main()
{
	deque<int> intDeque;
	int t;
	while (cin >> t) {
		if (t % 2 != 0)
			intDeque.push_front(t);
		else
		{
			intDeque.push_back(t);
		}
	}
	cout << "Deque is : ";
	for (unsigned int i = 0; i < intDeque.size(); i++)
	{
		cout << intDeque[i] << " ";
	}
	cout << endl;

	deque<int> intDeque2{ intDeque };
	reverse(intDeque2.begin(), intDeque2.end());
	list<int> list1(intDeque2.begin(), intDeque2.end());
	list<int>::iterator p;
	list<int>::iterator itr1 = list1.begin();
	cout << "list1 is : ";
	for (p = list1.begin(); p != list1.end(); p++)
	{
		cout << *p << " ";
	}
	cout << endl;
	list<int> list2;
	for (size_t i = 0; i < intDeque.size(); i++)
	{
		list2.push_back(intDeque[i] * *itr1);
		itr1++;
	}
	cout << "list2 is : ";
	for (p = list2.begin(); p != list2.end(); p++)
	{
		cout << *p << " ";
	}

	return 0;
}