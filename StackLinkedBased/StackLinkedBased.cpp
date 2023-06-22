// StackLinkedBased.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
#include "stack.h"

int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.traverse();


}

