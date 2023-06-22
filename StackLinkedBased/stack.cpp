#include "stack.h"
#include <iostream>
using namespace  std;

stack::stack()
{
	Top = NULL;
}

bool stack::isEmpty()
{
	return (Top == NULL);
}

void stack::push(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	
		newNode->next = Top;
	
	Top = newNode;
}

void stack::pop()
{
	if (isEmpty()) {
		cout << "Can't delete item";
		return;
	}
	Node* del = Top;
	Top = Top->next;
	delete del;
}

void stack::traverse()
{
	if (isEmpty()) {
		cout << "Stack is empty" << endl;
		return;
	}
	Node* temp = Top;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}