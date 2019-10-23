#pragma once
#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#define MAX_SIZE 100

using namespace std;

class ArrStack
{
private:
	int A[MAX_SIZE]; 
	int top;   
	int counter;
public:
	ArrStack();
	void Push(int x);
	void Pop();
	bool IsEmpty();
	bool IsFull();
};



class PointerStack {
public:
	PointerStack();
	void push(int&);
	Node* pop();
	bool IsEmpty();
private:
	Node * top;
	int counter = 0;
};

