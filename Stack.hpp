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
	int* A;
	int top;   
	int counter;
public:
	ArrStack();
	ArrStack(int x);
	void Push(int x);
	int Pop();
	bool IsEmpty();
	bool IsFull();
};



class PointerStack {
public:
	PointerStack();
	void push(int);
	int pop();
	bool IsEmpty();
private:
	Node * top;
};

