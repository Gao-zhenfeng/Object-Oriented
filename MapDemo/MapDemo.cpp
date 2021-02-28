// MapDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<int, string> map1;
	map1.insert(map<int, string>::value_type(100, "Zhang San"));
	map1.insert(map<int, string>::value_type(101, "Li Si"));
	map1.insert(map<int, string>::value_type(102, "Zhen Xiaosa"));
	map1.insert(map<int, string>::value_type(103, "Hao Meili"));

	cout << "Initial contents in map1L: " << endl;
	map<int, string>::iterator p;
	for (p = map1.begin(); p != map1.end(); p++)
		cout << p->first << " " << p->second << endl;
	//使用first访问key: 使用second访问value

	cout << "Enter a key to search for the name: ";
	int key;
	cin >> key;
	p = map1.find(key);

	if (p == map1.end())//若迭代器指向map尾部，则未找到指定键
	{
		cout << " key " << key << "not found in map1";
	}
	else
	{
		cout << " " << p->first << " " << p->second << endl;
	}
	map1.erase(103);
	cout << "\nAfter erase 103, ,map1: " << endl;
	for (p = map1.begin(); p != map1.end(); p++)
		cout << p->first << " " << p->second << endl;

	return 0;
}