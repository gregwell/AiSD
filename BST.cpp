#include <string>
#include <iostream>
#pragma once
#include "BST.hpp"
#include "BTNode.hpp"
#include <algorithm>
using namespace std;

BTNode* BST::Insert(BTNode* root, int data) {
	if (root == NULL) root = new BTNode(NULL, NULL, data); //root jest null, więc tworzę noda, zwracam adres tego Node jako root.
															// konstruktor zapewnia srworzenie left i right jako null

	else if (data <= root->data) root->left = Insert(root->left, data); //element mniejszy wiec pojdzie na lewo
																		//wykonuje tą funckję rekurencyjnie, tylko tym razem jako 1 argument
																		//jest root->left czyli NULL wiec tym razem wchodzi do 1 IFA.

	else root->right = Insert(root->right, data);	// tak samo ale na prawo.
	return root;
}

BTNode* BST::MinBST(BTNode* root)	
{
	if (root == NULL) return NULL;
	while (root->left != NULL) root = root->left; //ide na sam komiec lewy
	return root;
}


BTNode* BST::MaxBST(BTNode* root)	
{
	if (root == NULL) return NULL;
	while (root->right != NULL) root = root->right;  //ide na sam koniec prawy
	return root;
}

BTNode* BST::Find(BTNode*root, int data) {
	if (root == nullptr) return nullptr;
	else if (root->data == data) return root;	//zwroc wskaznik do tego wezla
	else if (root->data < data) return Find(root->right, data);		//dane wieksze -> szukaj w prawo
	else return Find(root->left, data);			//dane mniejsze -> szukaj w lewo
}


BTNode* BST::Delete(BTNode *root, int data) {
	if (root == NULL) return root;
	//znajdz element ktory bedziemy usuwac
	else if (data < root->data) root->left = Delete(root->left, data); //w lewo jesli mniejsze
	else if (data > root->data) root->right = Delete(root->right, data); //w prawo jesli wieksze
	else {
		if (root->left == NULL && root->right == NULL) { //jesli nie ma dzieci to usuwam go
			delete root;
			root = NULL;
		}
		else if (root->left == NULL) {
			BTNode *temp = root; // jesli nie ma lewego dziecka, ma tylko prawe dziecko
			root = root->right; //adres roota  zmieniam na adres prawego dziecka
			delete temp;	//usuwam adres do tego noda ktorego rozwazalem, adres jest na tego nizej po prawej
		}
		else if (root->right == NULL) {
			BTNode *temp = root;
			root = root->left;
			delete temp;
		}
		else { //ma obie dziecka
			BTNode *temp = MinBST(root->right); //tworze tymczasowego noda ktory bierze z prawej strony i znajduje minimum, ta wartosc
												// bedzie wieksza niz wszystie na lewo ale mniejsza niz te na prawo!
			root->data = temp->data; //podmieniam wartosc tego Noda omawianego na ta wartosc ktora znalazlem  wyzej^
			root->right = Delete(root->right, temp->data); // usuwam prawe dziecko
		}
	}
	return root;
}

void BST::Inorder(BTNode*root) {

	if (root != nullptr) {
		inorder(root->left);
		//ide do samego lewego az sie skoncza

		cout << root->data << " ";
		//jak sie skonczy to wypisuje wartosc

		inorder(root->right);
		//jak wypisze wartosc to wchodze do prawego
	}
}



int BST::Height(BTNode* root)
{
	int l;
	int r;

	if (root == NULL) return -1; 
	else
	{
		l = Height(root->left);
		r = Height(root->right);

		return max(l, r)+1;
	}
}

int BST::minDepth(BTNode *root)
{
	if (root == NULL) return 0;

	if (root->left == NULL && root->right == NULL) return 0;

	if (!root->left) return minDepth(root->right) + 1;

	if (!root->right) return minDepth(root->left) + 1;

	return min(minDepth(root->left), minDepth(root->right)) + 1;
}


int BST::NewLength(BTNode* root, int x) {
	
	return minDepth(Find(root, x));

}