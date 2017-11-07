#include "stdafx.h"
#include "Head.h"

Head::Head(Queue *head)
{
	_head = head;
}

Queue * Head::addNode(Node& node)
{
	Queue* temp = new Queue;
	temp->setNode(&node);

	if (this->_head == nullptr)
	{
		this->_head = temp;
		return this->_head;
	}

	return (_head->addNode(node));
}

Node * Head::getNode()
{
	Node* temp = _head->getNode();
	
	_head = _head->getNext();
	
	return temp;
}

Node * Head::topNode()
{
	return (_head->topNode());
}

void Head::setNode(Node * node)
{
	_head->setNode(node);
}

bool Head::isEmpty()
{
	if (_head == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Head::printQueue()
{
	_head->printQueue();
}
