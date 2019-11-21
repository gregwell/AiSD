#include <string>
#include <iostream>
#pragma once
#include "BST.hpp"
#include "BTNode.hpp"
using namespace std;

BTNode* BST::Insert(BTNode* root, int data) {
	if (root == NULL) root = new BTNode(NULL, NULL, data);
	else if (data <= root->data) root->left = Insert(root->left, data); // <= elementy ida na lewo
	else root->right = Insert(root->right, data);	// > na prawo
	return root;
}

BTNode* BST::MinBST(BTNode* root)	
{
	if (root == NULL) return NULL;
	while (root->left != NULL) root = root->left;
	return root;
}


BTNode* BST::MaxBST(BTNode* root)	
{
	if (root == NULL) return NULL;
	while (root->right != NULL) root = root->right;
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
	else if (data < root->data) root->left = Delete(root->left, data);
	else if (data > root->data) root->right = Delete(root->right, data);
	else {
		if (root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
		else if (root->left == NULL) {
			BTNode *temp = root; //przechowuje tego roota w tymczasowej zmiennej
			root = root->right;
			delete temp;
		}
		else if (root->right == NULL) {
			BTNode *temp = root;
			root = root->left;
			delete temp;
		}
		else { //right and left not null
			BTNode *temp = MinBST(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
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

