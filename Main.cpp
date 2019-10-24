#include <iostream>
#include "Odczyt.hpp"
#include <vector>
#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"

using namespace std;

int main()
{
	ArrayQueue myarray;
	myarray.enqueue(6);
	myarray.enqueue(4);
	myarray.enqueue(2);
	myarray.enqueue(3);
	myarray.enqueue(7);
	cout << myarray.dequeue() << endl;
	cout << myarray.dequeue() << endl;

	PointerQueue my;
	my.enqueue(4);

	ArrStack myarraystack;
	myarraystack.Push(7);
	myarraystack.Push(3); 
	myarraystack.Push(1); 
	myarraystack.Pop(); 

	PointerStack mypointerstack;
	mypointerstack.push(3);
	mypointerstack.push(4);
	mypointerstack.pop();


	system("PAUSE");
	return 0;
}