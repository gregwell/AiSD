#pragma once
#include <iostream>
#include <string>
#include <utility>
#include "Element.hpp"
#include "BTNode.hpp"
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

//Binary Tree Stack
class ArrBTStack
{
private:
	BTNode* A[10];
	int top;
	int counter;
public:
	ArrBTStack();
	ArrBTStack(BTNode* v);
	void InitialPush(BTNode* v);
	void Push(BTNode* v);
	BTNode* Pop();
	bool IsEmpty();
	bool IsFull();
	int Top();
};

//zobacz czy nie lepiej pointerowo to zrobic stosowoo

//class PointerBTStack {
//public:
//	PointerBTStack();
//	void push(int);
//	int pop();
//	bool IsEmpty();
//
//private:
//	BTNode * top;
//};