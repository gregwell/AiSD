#pragma once
#include <iostream>
#include <utility>
#include <string>

using namespace std;

class BTNode
{
public:
	BTNode * left;
	BTNode * right;

	BTNode(BTNode* a, BTNode* b, int c) { left = a; right = b;  data = c; };
	BTNode() { left = nullptr; right = nullptr;  data = NULL; };

	int data;
};

void preorder(BTNode * v);
void inorder(BTNode * v);
void postorder(BTNode * v);

void preorder_stack(BTNode * v);

//
//BTNode * v, *S[7];     // stos
//int sptr;                  // wskaźnik stosu
//
//S[0] = &A;                 // na stosie umieszczamy wskazanie korzenia
//sptr = 1;                  // stos zawiera 1 element
//
//while (sptr)
//{
//	v = S[--sptr];           // pobieramy ze stosu wskazanie węzła
//
//	cout << v->data << " ";  // przetwarzamy węzeł
//
//	// na stosie umieszczamy wskazania dzieci, jeśli istnieją
//
//	if (v->right) S[sptr++] = v->right;
//
//	if (v->left)  S[sptr++] = v->left;
//}
