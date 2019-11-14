#include <iostream>
#include "Element.hpp"
#include <utility>
#include "DLLqueue.hpp"
#include <string>
#include "BTNode.hpp"
#include "Stack.hpp"

void preorder(BTNode * v)
{
	if (v != nullptr)
	{
		cout << v->data << " "; //odczytuje wartosc
		preorder(v->left);      //jesli istnieje lewe to wchodzimy
		//lewe sie wykonuje ciagle bo tutaj rekurencja wraca do siebie
		//skonczy sie dopiero jak skoncza sie lewe
		preorder(v->right);     
	}
}

void inorder(BTNode * v)
{
	if (v)
	{
		inorder(v->left);       
		//ide do samego lewego az sie skoncza
		cout << v->data << " "; 
		//jak sie skonczy to wypisuje wartosc
		inorder(v->right);      
		//jak wypisze wartosc to wchodze do prawego
	}
}

void postorder(BTNode * v)
{
	if (v != nullptr)
	{
		postorder(v->left);     
		postorder(v->right);    
		//jak dojdzie do lewego konca
		//to sila rzeczy nie ma lewego i prawego nizej
		//tak wiec wypisuje wartosc
		cout << v->data << " ";  //wypisuje
		
	}
}