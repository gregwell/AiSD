#include <iostream>
#include <utility>
#include "Element.hpp"

using namespace std;

void Node::SetPointer(Node* a)
{
	link = a;
};

Node* Node::GetPointer()
{
	return link;
}

Node* Node::GetPrev()
{
	return prev;
}

void Node::SetPrev(Node* a)
{
	prev = a;
};

int Node::ReturnValue()
{
	return data;
}

void Node::SetValue(int a) 
{ 
	data = a; 
};