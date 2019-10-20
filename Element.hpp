#pragma once
#include <iostream>
#include <utility>
#include <string>

using namespace std;

class Element {
public:
	Element(string a) { imie = a; };
	Element(string a, Element* b) { imie = a; wsk = b; cout << imie << " " << wsk << endl; };
	Element() = default;
	~Element() { cout << "usuwam " << imie << "\n";  };

	void operator = (Element&&);
	Element& operator =(Element&);
	bool operator ==(Element& a);
public:
	void SetPtr(Element* a) { wsk = a; };
	Element* GetPtr();
	string RetVal();
	void SetVal(string a) { imie = a; };
private:
	string imie;
	Element* wsk;
};
