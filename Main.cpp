#include <iostream>
#include "Odczyt.hpp"
#include <vector>
#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "BTNode.hpp"

using namespace std;

int main()
{
	//leaf nodes

	BTNode h = { NULL,NULL, 2 };
	BTNode i = { NULL,NULL, 4 };
	BTNode k = { NULL,NULL, 9 };
	BTNode f = { NULL,NULL, 17 };
	BTNode g = { NULL,NULL, 20 };

	// parent nodes

	BTNode d = { &h, &i, 3 };
	BTNode j = { &k, NULL, 13 };
	BTNode c = { &f, &g, 18 };
	BTNode e = { NULL, &j, 7 };
	BTNode b = { &d, &e, 6 };
	BTNode a = { &b, &c, 15 }; //left to jest b, right tio jest c

	cout << "Pre order: ";
	preorder(&a);
	cout << endl;
	cout << "In order: "; // lewe poddrzewo , potem prawe
	inorder(&a);
	cout << endl;
	cout << "Post order: "; // najpioerw lewe potem prawe a na koncu korzen
	postorder(&a);
	cout << endl;

	cout << "array stack implementation:" << endl;


	//pre order


	ArrBTStack abs;	//TWORZE STOS
	abs.Push(&a);	//jako root drzewa ustawiam a

	while (abs.IsEmpty()!=true) {

	BTNode* v = abs.Pop();	//ustawiam wartsc a najpierw, a teraz ja popuje i wyswietlam
	//bo ona jest pierwsza w pre order
		cout << v << " "; 

		//najpierw prawo jako s[0], potem lewo jako s[1] poniewaz
		//jak wroce do tej petli to zpopuje ze stosu i wyjdzie mi lewy!
		if (v->right != nullptr) abs.Push(v->right);
		if (v->left != nullptr) abs.Push(v->left);
		//w koncu sie lewe skoncza i sila rzeczy przejdzie do prawego
	}



	//in order

	//idzie na sam  dol
	//cofa sie jedno w gore
	//bierze prawe
	//znowu d gore itd
	//Z WYZSZEGO IDE NA SAM DOL, nawet jesli są 2 w dół

	ArrBTStack abs2;		//robie stos
	BTNode* current = &a;	//current jako korzen drzewa

	int t = abs2.Top();

	while (t != NULL || current != nullptr)
		if (current != nullptr)
		{
			//idzie ciagle w lewo
			abs2.Push(current);			//umieszczam current na stosie
			current = current->left;	//current bedzie lewym synem
		}
		else
		{
			// 'cofanie' sie o jeden gdy dojdziemy do konca lewego
			BTNode* temp = abs2.Pop();	
			cout << temp->data << endl;	// pokaz wartosc najpierw dolna
										// potem ide jedno do góry i biore z tego prawy
			current = current->right;				//v2 bedzie prawym synem
		}


	//post order
	ArrBTStack abs3;
	BTNode * prev;			//poprzedni wezel
	BTNode * current;		//obecny wezel
	abs3.InitialPush(&a);	//wkladam na stos element a, czyli korzen

	while (abs3.Top != nullptr)
{
		current = abs3.Pop(); // current jest rowne zerowemu elementowi tablicy
	
	//jesli jest nullem to wejdzie raz, a pozniej 
		if (prev == nullptr || prev->left == current || prev->right == current)
		{
			//jesli istnieje lewy nizej to dodajemy do stacka nizej
			if (current->left != nullptr)	  abs3.Push(current->left);
			//jesli wykona sie lewy to nie obchodzi nas prawy w tej iteracji
			else if (current->right != nullptr)	  abs3.Push(current->right);
		}
		else if (current->left == prev)
	{
			if (current->right != nullptr) abs3.Push(current->right);	//jezeli jest prawa strona, dopisujemy do stosu
	}
	else
	{
		cout << current->data << " ";	//wypisac dane
		abs3.Pop();						//sciagnac ze stosu
	}
	prev = current;				//przechodze do kolejnego
}

	system("PAUSE");
	return 0;
}