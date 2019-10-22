#include <iostream>
#include <utility>
#include "Element.hpp"



Element& Element::operator= (Element& a)
{
	elem = a.RetVal();
	wsk = a.GetPtr();
	return a;
}


bool Element::operator==(Element& a)
{
	if ((a.RetVal() == elem) && (a.GetPtr() == wsk))
		return true;
	else
		return false;
}

std::string Element::RetVal()
{
	return elem;
}

Element* Element::GetPtr()
{
	return wsk;
}

void Element::operator = (Element&& a)
{
	elem = std::move(a.RetVal());
	wsk = std::move(a.GetPtr());

}

