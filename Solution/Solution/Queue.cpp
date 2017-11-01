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
	Queue *count = _next;
	Queue temp;
	temp.setNode(&node);
	

	while (count != nullptr)
	{
		count->setNext((*_next));

	}

	count->setNext(temp);
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
