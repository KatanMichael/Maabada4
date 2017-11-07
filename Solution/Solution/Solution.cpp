// Solution.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
//#include "Queue.h"
#include "Head.h"

#include <iostream>
using namespace std;

void main()
{
	Node m("Michael", 27);
	Node s("Sapir", 27);
	Node e("Eddie", 24);
	Node n("Nir", 24);
	Node y("Yossie", 22);
	
	Queue line;
	Head h(&line);
	
	h.addNode(m)->addNode(s)->addNode(e)->addNode(n)->addNode(y);

	

	h.printQueue();

	h.getNode();

	h.printQueue();

	h.getNode();

	h.printQueue();
	
	h.addNode(m);
	cout << endl << endl;

	

	while (!h.isEmpty())
	{
		
		h.getNode();

	}

	h.addNode(e);
	h.addNode(y);
	h.addNode(n);

	if (h.isEmpty())
	{
		cout << "Im Empty" << endl << endl;
	}
	else
	{
		cout << "I got something in here!" << endl << endl;
	}
	h.printQueue();

}