#include <cstddef>
#ifndef LL_H
#define LL_H
struct LL {
	int value;
	LL* next;
};
class LLfunc {
public:
	LLfunc();
	void print();
	void printRecursion(LL* n);
	void printRecursionReverse(LL* n);
	void insertB(int value);
	void insertN(int value, int pos);
	void insertE(int value);
	void deleteB();
	void deleteN(int pos);
	void deleteE();
	void reverseList();
	bool isPaly();
	LL* reverseRecursion(LL* n);
	LL* getHead();
private:
	
	LL* head;
};

#endif 
