#include "pch.h"
#include "List.h"
#include <iostream>

using namespace std;

List::List(int val)
{
	Node* node = new Node(val, nullptr, nullptr);
	first = last = node;
}
List::~List()
{
}

void List::AddFirst(int val)
{
	Node* node = new Node(val, nullptr, first);
	first->prev = node;
	first = node;
}


void List::AddLast(int val)
{
	Node* node = new Node(val, last, nullptr);
	last->next = node;
	last = node;
}


int List::Add(int val, int poz)
{
	if (poz == 0)
	{
		AddFirst(val);
		return 1;
	}
	int count = 0;
	for (Node* head = first; head; head = head->next)
	{
		if (count == poz-1)
		{
			Node* node = new Node(val, head, head->next);
			UpdateLinks(head, node);
			return 1;
		}
		count++;
	}
	return 0;
}

void List::UpdateLinks(Node * head, Node * node)
{
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}


void List::WriteInOrder()
{
	for (Node* head = first; head; head = head->next)
	{
		cout << head->value << " ";
	}
	cout << endl;
}


void List::WriteReverse()
{
	for (Node* head = last; head; head = head->prev)
	{
		cout << head->value << " ";
	}
	cout << endl;
}


int List::DeleteValue(int val)
{
	for (Node* head = first; head; head = head->next)
	{
		if (head->value == val)
		{
			if (head->prev)
				head->prev->next = head->next;
			if (head->next)
				head->next->prev = head->prev;
			delete head;
			return 1;
		}
	}
	return 0;
}


int List::DeletePosition(int poz)
{
	int count = 0;
	for (Node* head = first; head; head = head->next)
	{
		if (count == poz)
		{
			return 1;
		}
		count++;
	}
	return 0;
}
