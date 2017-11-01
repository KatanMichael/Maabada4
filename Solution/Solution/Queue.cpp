#include "stdafx.h"


#include "Queue.h"
#include <iostream>
using namespace std;

#pragma once

Queue::Queue()
{
	cout << "Im Here";
	_client = NULL;
	_next = NULL;
}

void Queue::addNode(Node& node)
{
	Queue* count  = _next;
	Queue temp;
	temp.setNode(&node);
	
	if (count == NULL)
	{
		_next = &temp;
	}
	else
	{
		while (count != NULL)
		{
			count = count->getNext();
		}

		count->setNext(&temp);
	}

	

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
