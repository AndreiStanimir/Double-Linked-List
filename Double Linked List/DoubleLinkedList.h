#pragma once
class Node
{
public:
	Node();
	Node(int val, Node * Prev, Node * Next);
	~Node();
	
//private:
	int value;
	Node*  prev;
	Node* next;
};

