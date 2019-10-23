#include <iostream>
#include <utility>
#include "Element.hpp"

using namespace std;

//move contructor
void Node::operator = (Node&& a)
{
	data = move(a.ReturnValue());
	link = move(a.GetPointer());
}
//copy its internal pointer to data 
//instead of copying all data

Node& Node::operator= (Node& a)
{
	data = a.ReturnValue();
	link = a.GetPointer();
	return a;
}

bool Node::operator==(Node& a)
{
	if ((a.ReturnValue() == data) && (a.GetPointer() == link))
		return true;
	else
		return false;
}

int Node::ReturnValue()
{
	return data;
}

Node* Node::GetPointer()
{
	return link;
}



