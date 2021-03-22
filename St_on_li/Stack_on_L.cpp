#include "Header.h"

template<typename T>
List<T>::List()
{
	size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	size++;
}

template<typename T>
T List<T>::pop_front()
{
	if (head != nullptr)
	{
		T retData = head->data;

		Node<T>* temp = head;

		head = head->pNext;

		delete temp;

		size--;

		return retData;
	}
	else {
		cout << "Stack is empty" << endl;
		return T();
	}
}

template<typename T>
int List<T>::retSize()
{
	return size;
}

template<typename T>
void List<T>::clear()
{
	while (size)
	{
		pop_front();
	}
}

template<typename T>
void List<T>::print()
{
	Node<T>* temp = head;

	for (int i = 0; i < size; i++)
	{
		cout << temp->data << endl;
		temp = temp->pNext;
	}
}

template<typename T>
bool List<T>::isEmpty()
{
	if (size == 0)
	{
		cout << "______________" << endl;
		cout << "Stack is empty" << endl;
		return false;
	}
	else
	{
		cout << "__________________" << endl;
		cout << "Stack is not empty" << endl;
		return true;
	}
}
