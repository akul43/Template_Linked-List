#include "List.hpp"
#include <iostream>


template <typename T>
List<T>::List() : head{ nullptr }, tail{ nullptr }
{
}

template <typename T>
List<T>::~List()
{
	
}

template <typename T>
void List<T>::createNode(T value) //This function randomly creates a node in the list by passing it a T value
{

	struct node<T> *temp = new node<T>;
	temp->data = value;
	temp->next = nullptr;
	if (head == nullptr)
	{
		head = temp;
		tail = temp;
		temp = nullptr;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	} 
}

template <typename T>
void List<T>::display() //Display on console
{

	struct node<T> *temp = new node<T>;
	temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data << "\t";
		temp = temp->next;
	}
	std::cout << std::endl;
}

template <typename T>
void List<T>::push_front(const T &element) //Adds element by reference to the front of the list
{
	struct node<T> *temp = new node<T>;
	temp->data = element;
	temp->next = head;
	head = temp;
}

template <typename T>
void List<T>::push_back(const T &element) //Adds element by reference to the end of the list
{
	struct node<T> *temp1 = new node<T>;
	temp1 = head;
	while (temp1->next != nullptr)
	{
		temp1 = temp1->next;
	}
	struct node<T> *temp = new node<T>;
	temp->data = element;
	temp->next = nullptr;
	temp1->next = temp;
}

template <typename T>
bool List<T>::insert(const T &element, unsigned position) //Instert an element in your list at the specified position
{

	node<T> *cur = new node<T>;

	cur = head;
	for (unsigned i = 1; i < position; i++)
	{
		cur = cur->next;
		if (cur == nullptr)
		{
			return false;
		}
	}
	node<T> *temp = new node<T>;
	temp->data = element;
	temp->next = cur->next;
	cur->next = temp;
	return true;
}

template <typename T>
bool List<T>::erase(unsigned position) //Deletes an element by passing its position
{
	node<T> *cur = new node<T>;
	node<T> *prev = new node<T>;
	cur = head;
	for (unsigned i = 1; i < position; i++)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = cur->next;
	return true;
}

template <typename T>
bool List<T>::erase(const T &element) //Deletes an element by passing it by reference
{
	node<T> *cur = new node<T>;
	node<T> *prev = new node<T>;
	cur = head;
	while (cur->data != element)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = cur->next;
	return true;
}

template <typename T>
unsigned List<T>::size() const  //Returns the number of nodes in the list
{
	int counter = 1;
	node<T> *temp = new node<T>;
	temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
		counter++;
	}
	return counter++;
}

template <typename T>
void List<T>::pop_back() //Delete last node in list
{
	node<T> *temp = new node<T>;
	temp = head;
	node<T> *prev = new node<T>;
	while (temp->next != nullptr)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = nullptr;
	delete(temp);
}

template <typename T>
void List<T>::pop_front() //Delete first node in list
{
	node<T> *temp = new node<T>;
	temp = head;
	head = temp->next;
	delete(temp);
}

template <typename T>
T& List<T>::get_element(unsigned position) const //Get the element of the list at the specified iterator passed
{
	
	node<T> *temp = new node<T>;
	temp = head;
	for (unsigned i = 1; i < position; i++)
	{
		temp = temp->next;
	}
	return temp->data;
}

template <typename T>
T& List<T>::get_front() const //Get the first element of the list
{
	node<T> *temp = new node<T>;
	temp = head;
	return temp->data;
}

template <typename T>
T& List<T>::get_back() const //Get last element of the list
{
	node<T> *temp = new node<T>;
	temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	return temp->data;
}

