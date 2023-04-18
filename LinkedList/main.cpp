#include <iostream>
#include "Linkedlist.h"
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList lk1;
	
	lk1.insertToHead(15);
	lk1.insertToHead(20);
	lk1.insertToHead(25);
	lk1.insertToHead(30);
	lk1.insertToTail(5);
	lk1.insertAfter(20,50);
	
	cout << "head : " << lk1.head->value << endl;
	cout << "tail : " << lk1.tail->value << endl;	
	cout << lk1.head->next->value << endl;
	cout << lk1.head->next->next->value << endl;
	lk1.printAll();
	
	
	return 0;
}