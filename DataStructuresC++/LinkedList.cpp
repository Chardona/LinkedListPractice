#include "LinkedList.h"
#include <iostream>
#include <vector>

LLfunc::LLfunc() { head = NULL; }
LL* LLfunc::getHead() { return head; }
void LLfunc::print() {
	LL* temp = head;
	while (temp != NULL) {
		std::cout << temp->value << " ";
		temp = temp->next;
	}
}
void LLfunc::printRecursion(LL* n) {
	
	if (n == NULL) {
		return;
	}
		std::cout << n->value << " ";
		printRecursion(n->next);
}
void LLfunc::printRecursionReverse(LL* n){
	if (n == NULL) { return; }
	printRecursionReverse(n->next);
	std::cout << n->value << " ";
}
void LLfunc::insertB(int value) {
	LL* temp = new LL();
	temp->value = value;
	temp->next = head;
	head = temp;
}
void LLfunc::insertN(int value, int pos) {
	LL* lengthChecker = head;
	int length{};
	while (lengthChecker != NULL) {
		lengthChecker = lengthChecker->next;
		length++;
	}
	
	
	if (pos > length || pos == 0) {
		std::cout << "Wrong position input. Check it\n";
	}
	else if (pos == 1) {
		insertB(value);
		return;
	}
	else {
		LL* temp = new LL;
		temp->value = value;
		temp->next = NULL;

		LL* temp2 = head;
		
		for (size_t i{}; i < pos - 2; i++) {
			temp2 = temp2->next;
		}
		temp->next = temp2->next;
		temp2->next = temp;
	}
}
void LLfunc::insertE(int value) {
	LL* temp = new LL;
	temp->value = value;
	temp->next = NULL;

	LL* temp2 = head;
	while (temp2->next != NULL) {
		temp2 = temp2->next;
	}
	temp2->next = temp;
}
void LLfunc::deleteB() {
	LL* temp = head;
	head = temp->next;
	delete temp;
	
}
void LLfunc::deleteN(int pos) {
	LL* lengthChecker = head;
	int length{};
	while (lengthChecker != NULL) {
		lengthChecker = lengthChecker->next;
		length++;
	}
	if (pos > length|| pos == 0) {
		std::cout << "Wrong input. Check it.\n";
	}
	else if (pos == 1) {
		deleteB();
	}
	else {
		LL* preDeletedNode, * deletedNode;
		preDeletedNode = head;
		for (size_t i{}; i < pos - 2; i++) {
			preDeletedNode = preDeletedNode->next;
		}
		deletedNode = preDeletedNode->next;
		preDeletedNode->next = lengthChecker;
		delete deletedNode;
	}
}
void LLfunc::deleteE() {
	LL* preEnd, *deletedNode;
	preEnd = head;
	while (preEnd->next->next != NULL) {
		preEnd = preEnd->next;
	}
	deletedNode = preEnd->next;
	preEnd->next = NULL;
	delete deletedNode;

}
void LLfunc::reverseList() {
	LL* prev;
	LL* current;
	LL* next;
	prev = NULL;
	current = head;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
LL* LLfunc::reverseRecursion(LL* head) {
	if (head->next == NULL || head == NULL) { return head; }
	LL* newhead = reverseRecursion(head->next);
	head->next->next = head;
	head->next = NULL;

	return newhead;
}
bool LLfunc::isPaly() {
	std::vector <int> array;
	std::vector <int> array2;
	LL* temp = head;
	while (temp != NULL) {
		array.push_back(temp->value);
		temp = temp->next;
	}
	std::vector <int> temp2 = array;
	while (!temp2.empty()) {
		array2.push_back( temp2.back());
		temp2.pop_back();
	}
	
	return array == array2;
}