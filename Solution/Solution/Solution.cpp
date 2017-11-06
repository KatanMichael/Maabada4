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
	Node n("Nir", 24);
	Node y("Yossie", 22);
	Queue head;

	Queue line(head);
	line.addNode(m)->addNode(s)->addNode(e)->addNode(n)->addNode(y);

	line.printQueue();
	
	
}