#include <iostream>
#include "BinaryTree.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(48);
	bin.insertNode(31);
	bin.insertNode(20);
	bin.insertNode(32);
	bin.insertNode(54);
	bin.insertNode(53);
	bin.insertNode(68);
	bin.insertNode(62);
	bin.insertNode(78);
	
	bin.inOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.postOrder();
	cout << endl; 
	return 0;
}