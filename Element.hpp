#pragma once
#include <iostream>
#include <utility>
#include <string>

using namespace std;

class Node {
public:
	Node(int a) { data = a; }
	Node(int a, Node* b) { data = a; link = b;};
	Node() = default;
	~Node() { cout << "destructor" << data << "\n";  };

	void operator = (Node&&);
	Node& operator =(Node&);
	bool operator ==(Node& a);

	void SetPtr(Node* a) { link = a; };
	Node* GetPointer();
	int ReturnValue();
	void SetVal(int a) { data = a; };

private:
	int data;
	Node* link;
};

// *cos = value of cos pointer
// (*temp).data = 2; is equal to: temp -> data =2
// (*temp).link = NULL; is equal to: temp -> link = NULL