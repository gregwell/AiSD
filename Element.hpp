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
	//destructor should clean the memory

	void SetPointer(Node* a);
	Node* GetPointer();
	int ReturnValue();
	void SetValue(int a);

private:
	int data;
	Node* link;
};

// *cos = value of pointer
// (*temp).data     <==>    temp -> data 
// (*temp).link     <==>    temp -> link 