#include <string>
#include <iostream>
#pragma once
#include "BTNode.hpp"

using namespace std;


class BST {
public:
	BTNode* Insert(BTNode* root, int data);
	//bool Search(BTNode* root, int data);
	BTNode* MinBST(BTNode* root);
	BTNode* Delete(BTNode* root, int data);
	BTNode* MaxBST(BTNode* root);
	BTNode* Find(BTNode*root, int data);
	void Inorder(BTNode*root);
};