#pragma once
#include <iostream>
#include <utility>
#include <string>

using namespace std;

class Node {
public:
	Node(int a) { data = a; }
	Node(int a, Node* b) { data = a; link = b; };
	Node(int a, Node* b, Node* c) { data = a; prev = b;  link = c; };
	Node() = default;
	~Node() { cout << "destructor" << data << "\n";  };

	void SetPointer(Node* a);
	Node* GetPointer();
	Node* GetPrev();
	void SetPrev(Node* a);
	int ReturnValue();
	void SetValue(int a);

private:
	int data;
	Node* link;
	Node* prev;
};

// *cos = value of pointer
// (*temp).data     <==>    temp -> data 
// (*temp).link     <==>    temp -> link 