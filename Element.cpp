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

int Node::ReturnValue()
{
	return data;
}

void Node::SetValue(int a) 
{ 
	data = a; 
};