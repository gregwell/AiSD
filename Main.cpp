#include <iostream>
#include "Odczyt.hpp"
#include <vector>
#include "Lista.hpp"
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


	system("PAUSE");
	return 0;
}