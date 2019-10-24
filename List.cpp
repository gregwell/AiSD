#include <iostream>
#include <utility>
#include <fstream>
#include "List.hpp"
#include "Element.hpp"

using namespace std;

List::List() 
{
	sentinel = new Node();
	head = sentinel;
	current = head;
}

List::~List()
{

}