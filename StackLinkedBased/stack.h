#pragma once
#include "Node.h"
class stack
{
	Node* Top;

public:
	stack();
	bool isEmpty();
	void push(int value);
	void pop();
	void traverse();


};

