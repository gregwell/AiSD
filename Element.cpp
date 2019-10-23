#include <iostream>
#include <utility>
#include "Element.hpp"

using namespace std;


//void Node::operator = (Node&& a)
//{
//	data = move(a.ReturnValue());
//	link = move(a.GetPointer());
//}
//
//Node& Node::operator= (Node& a)
//{
//	data = a.ReturnValue();
//	link = a.GetPointer();
//	return a;
//}
//
//bool Node::operator==(Node& a)
//{
//	if ((a.ReturnValue() == data) && (a.GetPointer() == link))
//		return true;
//	else
//		return false;
//}

int Node::ReturnValue()
{
	return data;
}

Node* Node::GetPointer()
{
	return link;
}



