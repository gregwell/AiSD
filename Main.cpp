#include <iostream>
#include "Odczyt.hpp"
#include <vector>
#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"

using namespace std;

int main()
{
	cout << " Array queue:" << endl;
	ArrayQueue myarray;
	myarray.enqueue(6);
	myarray.enqueue(4);
	myarray.enqueue(2);
	myarray.enqueue(3);
	myarray.enqueue(7);
	cout << myarray.dequeue() << endl;
	cout << myarray.dequeue() << endl;

	cout << " Pointer queue:" << endl;
	PointerQueue my;
	my.enqueue(4);
	my.enqueue(2);
	my.enqueue(3);
	cout << my.dequeue() << endl;

	cout << " arr stack:" << endl;
	ArrStack myarraystack;
	myarraystack.Push(7);
	myarraystack.Push(3); 
	myarraystack.Push(1); 
	cout << myarraystack.Pop() << endl;

	cout << " Pointer stack:" << endl;
	PointerStack mypointerstack;
	mypointerstack.push(3);
	mypointerstack.push(4);
	cout << mypointerstack.pop() << endl;


	system("PAUSE");
	return 0;
}