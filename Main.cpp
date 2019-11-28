#include <iostream>
#include "Odczyt.hpp"
#include <vector>
#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "BTNode.hpp"
#include "BST.hpp"

using namespace std;

int main()
{
	
	BTNode* root = NULL; 

	BST tree;
	root = tree.Insert(root, 15);
	tree.Insert(root, 6);
	tree.Insert(root, 18);
	tree.Insert(root, 3);
	tree.Insert(root, 7);
	tree.Insert(root, 17);
	tree.Insert(root, 20);
	tree.Insert(root, 2);
	tree.Insert(root, 4);
	tree.Insert(root, 13);
	tree.Insert(root, 9);

	cout << "height drzewa" << tree.Height(root) << endl;
	cout << "new lenght" << tree.NewLength(root, 6) << endl;

	int min;
	min = tree.MinBST(root)->data;
	cout << "\nMinimalna wartosc w BST:" << min << endl;

	int max;
	max = tree.MaxBST(root)->data;
	cout << "\nMaximalna wartosc w BST:" << max << endl;

	BTNode* wsk = tree.Find(root, 17);
	cout << "\nZnaleziony wskaznik do Node z wart. 17, potwierdzenie:" << wsk->data << endl;

	cout << "\n\nDrzewo przed usunieciem dwoch najmniejszych wartosci" << endl;
	tree.Inorder(root);

	tree.Delete(root, tree.MinBST(root)->data);
	tree.Delete(root, tree.MinBST(root)->data);


	cout << "\n\nDrzewo po usunieciu " << endl;
	tree.Inorder(root);




	system("PAUSE");
	return 0;
}