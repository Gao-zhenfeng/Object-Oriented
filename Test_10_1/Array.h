#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::size_t;
using std::vector;

template <typename T>
class Array
{
public:
	Array(vector<T> v) {
		size_ = v.size();
		data_ = static_cast<T*> (new T[size_]);
		for (int i = 0; i < size_; i++) {
			data_[i] = v[i];
		}
	}

	// 析构函数，释放已经申请到的内存
	~Array()
	{
		delete data_;
	}
	// 排序，将数组中所有元素由小到大排序
	void sort()
	{
		std::sort(data_, &data_[size_]);
	}

	// 查找指定的元素key，返回其所在位置（位置编号从0开始）; 如果没有找到，则返回 -1
	int seek(T key)
	{
		for (int i = 0; i < size_; i++)
		{
			if (data_[i] == key)
				return i;
		}
		return -1;
	}

	void display()
	{
		for (int i = 0; i < size_; i++) {
			cout << data_[i];
			if (i != size_ - 1)
				cout << " ";  // 输出一个空格
		}
	}

private:
	T* data_;
	int size_;
};
