#include "pch.h"
#include "DoubleLinkedList.h"

using namespace std;

Node::Node(int val,Node *Prev,Node *Next)
{
	value = val;
	prev = Prev;
	next = Next;
}

Node::~Node()
{
	delete this;
}


