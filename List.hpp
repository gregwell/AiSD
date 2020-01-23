#pragma once
#include <iostream>
#include <string>

using namespace std;


class SNode
{
public:
	int data;
	SNode* next;
	SNode() { data = 0; next = nullptr; };
};


class List
{
private:
	SNode* head; 
	SNode* tail; 

public:
	List()
	{
		head = new SNode;
		head->data = 0;
		tail = NULL;
	}

	void add_front_item(int front);
	void add_last_item(int n);
	void print_list();
	SNode* find(int item);
	bool delete_from_list(int item);
	SNode* find_last_element(int item);
	void del(SNode* before_del);
	SNode* search(int value);
	SNode* gethead()
	{
		return head;
	}
};
