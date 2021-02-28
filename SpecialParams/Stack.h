#pragma once
//将StackOfInteger 泛型化, T 的默认类型是 int ,函数模板不能用
template <typename T = char, int N = 100>
class Stack
{
public:
	bool empty();
	T peek();
	T push(T value);
	T pop();
	int getSize();
	Stack();
private:
	T elements[N] = { 0 };
	int size{ 0 };
};

template <typename T, int N>
Stack<T, N>::Stack()
{
	size = 0;//可不写
	for (auto& i : elements) {
		i = 0;
	}
}

template <typename T, int N>
bool Stack<T, N>::empty()
{
	return(size == 0 ? true : false);
}

template <typename T, int N>
T Stack<T, N>::peek()
{
	return elements[size - 1];
}

template <typename T, int N>
T Stack<T, N>::push(T value)
{
	elements[size] = value;
	size++;
	return value;
}

template <typename T, int N>
T Stack<T, N>::pop()
{
	auto temp = elements[size - 1];
	elements[size - 1] = 0;
	size--;
	return temp;
}

template <typename T, int N>
int Stack<T, N>::getSize()
{
	return size;
}
