#pragma once
#include "DoubleLinkedList.h"
class List
{
public:
	List();
	List(int val);
	~List();
	void AddFirst(int val);
	void AddLast(int val);
	int Add(int val, int poz);
	void UpdateLinks(Node * head, Node * node);
	void WriteInOrder();
	void WriteReverse();
	int DeleteValue(int val);
	int DeletePosition(int poz);
private:
	Node* first;
	Node* last;
};

