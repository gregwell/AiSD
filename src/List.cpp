#pragma once
#include <iostream>
#include <string>
#include "List.hpp"
#include <fstream>


inline void List::add_front_item(int front)
{
	SNode* node = new SNode;
	node->data = front;
	node->next = NULL;

	if (head == NULL) {
		head = node;
		tail = node;
	}

	else
	{
		node->next = head;
		head = node;
		SNode* temp = head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
		node->next = NULL;
	}
}

inline void List::add_last_item(int n)
{
	SNode* tmp = new SNode; //temp
	tmp->data = n; //wgrywam argument jako wartosc
	tmp->next = NULL; //pointer na nulla

	if (head->next == NULL)
	{
		head->next = tmp; //ustawiam headowi pointer do tempa
		tail = tmp; //ogon na nowy node
	}
	else
	{
		tail->next = tmp;
		tail = tail->next;
	}
}

inline void List::print_list()
{
	SNode* tmp;
	tmp = head->next;

	while (tmp != NULL)
	{
		cout << tmp->data << "\t";
		tmp = tmp->next;
	}
}

inline SNode* List::find(int item)
{
	SNode* temp = head;

	while (temp != NULL && temp->data != item)
		temp = temp->next;

	return(temp);
}

inline void List::del(SNode* before_del)
{
	SNode* temp;
	temp = before_del->next;
	before_del->next = temp->next;
	delete temp;
}

inline SNode* List::find_last_element(int item) {
	SNode* temp = head;
	SNode* result = nullptr;

	while (temp != NULL)
	{
		if (temp->data == item)
		{
			result = temp;
		}
		temp = temp->next;
	}
	return result;
}


inline bool List::delete_from_list(int item)
{
	SNode* temp = head;
	SNode* tempx = NULL;

	if (head == NULL)
		return false;

	while (temp != NULL && (temp->data) != item)
	{
		tempx = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return false;

	else if (temp == head)
	{
		head = head->next;
		delete temp;
	}

	else
	{
		tempx->next = temp->next;
		delete temp;
	}

	return true;
}

inline SNode* List::search(int value)
{
	SNode* lastValueNode = nullptr;
	SNode* tmp = new SNode;
	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->data == value)
			lastValueNode = tmp;
		tmp = tmp->next;
	}
	return lastValueNode;
}
