// Solution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Queue.h"

#include <iostream>
using namespace std;

void main()
{
	Node m("Michael", 27);
	Node s("Sapir", 27);
	Node e("Eddie", 24);

	Queue* line = new Queue[1];
	line->addNode(m);
	line->addNode(s);
	line->addNode(e);

	
	line->printQueue();

}

