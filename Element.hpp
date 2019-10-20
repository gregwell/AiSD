#pragma once
#include <iostream>
#include <utility>
#include <string>

using namespace std;

class Element {
public:
	Element(string a) { elem = a; };
	Element(string a, Element* b) { elem = a; wsk = b; cout << elem << " " << wsk << endl; };
	Element() = default;
	~Element() { cout << "usuwam " << elem << "\n";  };

	void operator = (Element&&);
	Element& operator =(Element&);
	bool operator ==(Element& a);

	void SetPtr(Element* a) { wsk = a; };
	Element* GetPtr();
	string RetVal();
	void SetVal(string a) { elem = a; };
private:
	string elem;
	Element* wsk;
};
