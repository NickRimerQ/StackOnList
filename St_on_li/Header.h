#pragma once
#include <iostream>
using namespace std;

template<typename T>
class List
{
	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;
		Node(T data_ = T(), Node* pNext_ = nullptr)
		{
			data = data_;
			pNext = pNext_;
		}
	};
	int size;
	Node<T>* head;

public:
	List();
	~List();
	void push_front(T data);
	T pop_front();
	int retSize();
	void clear();
	void print();
	bool isEmpty();
};