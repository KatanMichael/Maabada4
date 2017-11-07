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
	line.addNode(m)->addNode(s)->addNode(e)->addNode(n)->addNode(y);

	Head h(&line);

	h.printQueue();

	h.getNode();

	h.printQueue();

	h.getNode();

	h.printQueue();
	
	h.addNode(m);
	cout << endl << endl;

	h.printQueue();

	while (!h.isEmpty())
	{
		h.getNode();
	}

	if (h.isEmpty())
	{
		cout << "Im Empty";
	}
	else
	{
		cout <<"IDK Man..";
	}
}