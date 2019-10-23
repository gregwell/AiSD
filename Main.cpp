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

	PointerQueue parray;
	parray.enqueue(3);



	//string a[10];	
	//string filename = "dane.txt";	
	//LoadFromFile<string>(a, filename);	
	//cout << a[0] << endl;
	//cout << a[1] << endl;
	//Lista MojaLista;
	//
	//string c = "abcde";
	//MojaLista.Insert(c);
	//c = "hgw";
	//MojaLista.Insert(c);
	//cout << MojaLista.RetCurrent() << endl;
	//
	//MojaLista.Next();
	//cout << MojaLista.RetCurrent() << endl;
	//c = "a";
	//MojaLista.Insert(c);
	//MojaLista.Printtt();

	//for (int i = 0; i<3; i++)
	//{
	//	cout<<MojaLista.RetCurrent()<<endl;
	//	//MojaLista.RetCurrent();
	//	MojaLista.Next();

	//}
	////MojaLista.Del();
	////MojaLista.Printtt();
	////MojaLista.Head();
	//
	//for (int i = 0; i<10; i++)
	//{
	//	cout << a[i] << endl;
	//	string bufor = a[i];
	//	MojaLista.Insert(bufor);
	//}
	//
	//
	//MojaLista.Printtt();
	//MojaLista.Head();
	//
	//for (int i = 0; i<MojaLista.SizeOf(); i++)
	//{
	//	cout<<MojaLista.RetCurrent()<<endl;
	//	MojaLista.Next();

	//}
	////MojaLista.Head();
	//MojaLista.Del();
	//cout << "ZZZZZZZZZZZZZZZZZZZzzz\n";
	//MojaLista.Printtt();
	//string dane = "zapis.txt";
	//MojaLista.Save(dane);
	system("PAUSE");
	return 0;
}