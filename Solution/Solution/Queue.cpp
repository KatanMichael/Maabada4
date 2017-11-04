#include "stdafx.h"

#include "Queue.h"
#include <iostream>
using namespace std;

#pragma once

Queue::Queue()
{
	//cout << "Im Here"<<endl;
	_client = NULL;
	_next = NULL;
}

void Queue::addNode(Node &node)
{
	Queue* count  = this;
	Queue temp;
	temp.setNode(&node);
	if (count != NULL)
	{
		cout << count->topNode()->getName() << endl;
	}
	
		while (count->getNext() != NULL)
		{
			count = count->getNext();
			cout << count->topNode()->getName() << endl;
		}

		count->setNext(&temp);
	
}



void Queue::setNode(Node* node)
{
	_client = node;
}


Queue* Queue::getNext()
{
	return _next;
}

void Queue::setNext(Queue* next)
{
	_next = next;
}

void Queue::printQueue()
{
	Queue* count = this;
	Node* temp;
	if (count != NULL)
	{
		while (count->getNext() != NULL)
		{
			temp = count->topNode();
			if (temp == NULL)
			{
				cout << "IM NULL";
			}
			//cout << "Name: " << count->getNode()->getName() << endl;
			count = count->getNext();
		}
	}
}

Node* Queue::topNode()
{
	return _client;
}