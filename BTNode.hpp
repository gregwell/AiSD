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

	int data;
};

void preorder(BTNode * v);