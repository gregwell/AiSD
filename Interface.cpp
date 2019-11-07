#include <iostream>
#include "Queue.hpp"
#include "Stack.hpp"
#include "Odczyt.hpp"
#include "List.hpp"
#include "Interface.hpp"

using namespace std;

void Lab3Ex3() 
{
	ArrayQueue kolejka(500);  // "Dana jest kolejka Q"
	ArrStack stos(300); //" .. i stos S"
	ArrStack stosPomocniczy(300);	//stos pomocniczy
	List lista; // lista zgodnych"

	//inicjalizacja kolejki i stosu
	int tablica[500];
	string filename = "file.txt";
//	LoadFromFile(tablica, filename);


	int counter = 0;
	//licze elementy kolejki ktore przeszedlem
	//trzeba przejsc przez kazdy element aby przejsc cala kolejke

	int cond = 13;	//zmienna do trzymania warunku
	bool CzyKolejka = 0; //flaga informuje czy aktualnie przeszukuje kolejke
	int kolejkaSize = kolejka.ReturnSize(); //rozmiar kolejki

	//petla przerywa sie gdy skonczy sie jeden ze zbiorow
	while ((!stos.IsEmpty()) || (counter != kolejkaSize))  
	{
		switch (CzyKolejka)
		{
		case 0:
		{
			if (!stos.IsEmpty())
			{
				int bufor = stos.Pop();
				if (bufor == cond)	
				{
					lista.Insert(bufor);
					break;
				}
				else {
					stosPomocniczy.Push(bufor);
				}
			}
			CzyKolejka = 1;
		}break;
		case 1: {
			if ((counter != kolejkaSize))
			{
				int bufor = kolejka.dequeue();
				if (bufor == cond)
				{
					lista.Insert(bufor);
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

	while (!stosPomocniczy.IsEmpty())
	stos.Push(stosPomocniczy.Pop());
}
