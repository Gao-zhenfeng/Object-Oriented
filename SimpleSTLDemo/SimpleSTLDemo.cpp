// SimpleSTLDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
1.创建容器对象
2.存入数据
3.显示元素数量
4.比较两个容器对象大小
*/

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	vector<int> vector1, vector2;
	list<int> list1, list2;
	deque<int> deque1, deque2;
	set<int> set1, set2;
	multiset<int> multiset1, multiset2;
	stack<int> stack1, stack2;
	queue<int> queue1, queue2;

	cout << "Vector: " << endl;
	vector1.push_back(1);
	vector1.push_back(2);
	vector2.push_back(30);
	cout << "size of vector1 : " << vector1.size() << endl;
	cout << "size of vector2 : " << vector2.size() << endl;
	cout << "maxium size of vector1: " << vector1.max_size() << endl;
	cout << "maxium size of vector2: " << vector2.max_size() << endl;
	vector1.swap(vector2);
	cout << "size of vector1: " << vector1.size() << endl;
	cout << "size of vector2: " << vector2.size() << endl;
	cout << "vector1 < vector2 ? " << (vector1 < vector2)
		<< endl << endl;

	cout << "list: " << endl;
	list1.push_back(1);
	list1.push_back(2);
	list2.push_back(30);
	cout << "size of list1 : " << list1.size() << endl;
	cout << "size of list2 : " << list2.size() << endl;
	cout << "maxium size of list1: " << list1.max_size() << endl;
	cout << "maxium size of list2: " << list2.max_size() << endl;
	list1.swap(list2);
	cout << "size of vector1: " << list1.size() << endl;
	cout << "size of list2: " << list2.size() << endl;
	cout << "list1 < list2 ? " << (list1 < list2)
		<< endl << endl;
	return 0;
}