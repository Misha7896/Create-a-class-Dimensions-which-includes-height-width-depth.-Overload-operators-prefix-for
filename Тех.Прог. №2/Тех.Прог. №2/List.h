#pragma once
#include <iostream>
using namespace std;

template <typename T>
class List
{

public:
	List();
	~List();
	void push_back(T data);
	void pop_front();
	void operator +(List<T>& other);
	void operator -(List<T>& other);
	void operator /(List<T>& other);
	void operator *(List<T>& other);
	void operator ==(List<T>& other);
	void operator !=(List<T>& other);
	
private:
	
	template <typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node( T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;
	Node<T>* head;

};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	while (Size)
	{
		pop_front();
	}
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);

	}
	Size++;
}

template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::operator+(List<T>& other)
{
	Node<T>* current = this->head;
	Node<T>* current2 = other.head;

	while (current->pNext != nullptr)
	{
		cout << current->data << " + " << current2->data << " --- ";
		current->data = current->data + current2->data;
		cout << current->data << endl;
		current = current->pNext;
		current2 = current2->pNext;
	}
	cout << current->data << " + " << current2->data << " --- ";
	current->data = current->data + current2->data;
	cout << current->data << endl;
	cout << "\n===================================================" << endl;
}

template<typename T>
void List<T>::operator-(List<T>& other)
{
	Node<T>* current = this->head;
	Node<T>* current2 = other.head;

	while (current->pNext != nullptr)
	{
		cout << current->data << " - " << current2->data << " --- ";
		current->data = current->data - current2->data;
		cout << current->data << endl;
		current = current->pNext;
		current2 = current2->pNext;
	}
	cout << current->data << " - " << current2->data << " --- ";
	current->data = current->data - current2->data;
	cout << current->data << endl;
	cout << "\n===================================================" << endl;
}

template<typename T>
void List<T>::operator/(List<T>& other)
{
	Node<T>* current = this->head;
	Node<T>* current2 = other.head;

	while (current->pNext != nullptr)
	{
		cout << current->data << " / " << current2->data << " --- ";
		current->data = current->data / current2->data;
		cout << current->data << endl;
		current = current->pNext;
		current2 = current2->pNext;
	}
	cout << current->data << " / " << current2->data << " --- ";
	current->data = current->data / current2->data;
	cout << current->data << endl;
	cout << "\n===================================================" << endl;
}

template<typename T>
void List<T>::operator*(List<T>& other)
{
	Node<T>* current = this->head;
	Node<T>* current2 = other.head;

	while (current->pNext != nullptr)
	{
		cout << current->data << " * " << current2->data << " --- ";
		current->data = current->data * current2->data;
		cout << current->data << endl;
		current = current->pNext;
		current2 = current2->pNext;
	}
	cout << current->data << " * " << current2->data << " --- ";
	current->data = current->data * current2->data;
	cout << current->data << endl;
	cout << "\n===================================================" << endl;
}

template<typename T>
void List<T>::operator==(List<T>& other)
{
	Node<T>* current = this->head;
	Node<T>* current2 = other.head;

	while (current->pNext != nullptr)
	{
		if(current->data == current2->data)
		{
			cout << current->data << " == " << current2->data << "  True " << endl;
		}
		else
		{
			cout << current->data << " != " << current2->data << "  False " << endl;
		}
		current = current->pNext;
		current2 = current2->pNext;
	}
	if(current->data == current2->data) cout << current->data << " == " << current2->data << " True ";
	else cout << current->data << " != " << current2->data << "  False " << endl;
	cout << "\n===================================================" << endl;
}

template<typename T>
void List<T>::operator!=(List<T>& other)
{
	Node<T>* current = this->head;
	Node<T>* current2 = other.head;

	while (current->pNext != nullptr)
	{
		if (current->data != current2->data)
		{
			cout << current->data << " != " << current2->data << "  True " << endl;
		}
		else
		{
			cout << current->data << " == " << current2->data << "  False " << endl;
		}
		current = current->pNext;
		current2 = current2->pNext;
	}
	if (current->data != current2->data) cout << current->data << " != " << current2->data << " True ";
	else cout << current->data << " == " << current2->data << "  False " << endl;
	cout << "\n===================================================" << endl;
}
