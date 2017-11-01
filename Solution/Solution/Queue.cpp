#include "stdafx.h"

#include "Queue.h"
#pragma once

Queue::Queue()
{
	_client = nullptr;
	_next = nullptr;
}

void Queue::addNode(Node& node)
{
	Queue count;
	Queue temp;
	count = (*_next);
	temp.setNode(&node);
	
	while (&count != nullptr)
	{
		count =	*count.getNext();
	}

	count.setNext(temp);

}

void Queue::setNode(Node* node)
{
	_client = node;
}

Queue* Queue::getNext()
{
	return _next;
}

void Queue::setNext(Queue next)
{
	*_next = next;
}
