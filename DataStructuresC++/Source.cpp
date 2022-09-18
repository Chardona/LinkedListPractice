#include "LinkedList.h"
#include <iostream>

int main() {
	LLfunc ll1;
	ll1.insertB(1);
	ll1.insertB(1);
	ll1.insertB(78);
	ll1.insertB(1);
	std::cout << "Result: " << ll1.isPaly();
	/*ll1.insertN(77, 2);
	ll1.insertN(44, 1);*/
	
	/*std::cout << "Before delete: ";
	ll1.print();
	std::cout << '\n';
	ll1.reverseList();
	ll1.print();
	std::cout << '\n';
	std::cout << "Print recursion: ";
	LL* value = ll1.getHead();
	ll1.printRecursion(value);
	std::cout << "\nPrint recursion reverse: ";
	ll1.printRecursionReverse(value);
	std::cout << "\nReverse in recursion: ";
	LL* valueForPrint = ll1.reverseRecursion(value);
	ll1.printRecursion(valueForPrint);*/
}