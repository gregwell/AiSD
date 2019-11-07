#include <iostream>
#include "Queue.hpp"
#include "Stack.hpp"
#include "Odczyt.hpp"
#include "List.hpp"
#include "Interface.hpp"

using namespace std;

void Lab3Ex3() 
{
	ArrayQueue kolejka(500);
	ArrStack stos(300);
	ArrStack stosBuforowy(300);	//stos pomocniczy
	List zgodne; // matches the condition

	//inicjalizacja kolejki i stosu
	int tablica[500];
	string filename = "file.txt";
//	LoadFromFile(tablica, filename);


	int counter = 0;
	//licze elementy kolejki ktore przeszedlem
	//trzeba przejsc przez kazdy element aby przejsc cala kolejke

	int cond = 13;	//zmienna do trzymania warunku
	bool CzyKolejka = 0; //flaga informuje czy aktualnie przeszukuje kolejke
	int rozmiar = kolejka.ReturnSize(); //rozmiar kolejki

	//petla przerywa sie gdy skonczy sie jeden ze zbiorow
	while ((!stos.IsEmpty()) || (counter != rozmiar))  
	{
		switch (CzyKolejka)
		{
		case 0:
		{
			while ((true) || (!stos.IsEmpty()))
			{
				int bufor = stos.Pop();
				if (bufor == cond)	
				{
					zgodne.Insert(bufor);
					break;
				}
				else {
					stosBuforowy.Push(bufor);
				}
			}
			CzyKolejka = 1;
		}break;
		case 1: {
			while ((true) || (counter != rozmiar))
			{
				int bufor = kolejka.dequeue();
				if (bufor == cond)
				{
					zgodne.Insert(bufor);
					break;
				}
				else {
					kolejka.enqueue(bufor);
				}
				counter++;
			}
			CzyKolejka = 0;
		}break;
		}
	}

	while (!stosBuforowy.IsEmpty())
		stos.Push(stosBuforowy.Pop());
}
