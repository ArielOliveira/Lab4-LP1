#include <iostream>
using std::string;

#include "list.h"

int main() {
	List<string> l;
	l.insertOrdered("Santana");
	l.insertOrdered("Bruno");
	l.insertOrdered("Joel");
	l.insertOrdered("Ariel");
	l.insertOrdered("Fernanda");
	cout << l;
	return 0;
}