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
	BTNode a = { &b, &c, 15 };


	preorder(&a); 
	cout << endl;

	system("PAUSE");
	return 0;
}