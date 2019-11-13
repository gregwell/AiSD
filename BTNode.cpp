#include <iostream>
#include "Element.hpp"
#include <utility>
#include "DLLqueue.hpp"
#include <string>
#include "BTNode.hpp"

void preorder(BTNode * v)
{
	if (v)
	{
		cout << v->data << " "; // odwiedzamy węzeł
		preorder(v->left);      // przechodzimy lewe poddrzewo
		preorder(v->right);     // przechodzimy prawe poddrzewo
	}
}