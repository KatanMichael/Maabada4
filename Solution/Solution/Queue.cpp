#include "stdafx.h"

#include "Queue.h"
#include <iostream>
using namespace std;

#pragma once

Queue::Queue()
{
	//cout << "Im Here"<<endl;
	_client = nullptr;
	_next = nullptr;
}

void Queue::printQueue()
{
	Queue* temp = this;

	while (temp->getNext() != nullptr)
	{
		temp->topNode()->printNode();
		temp = temp->getNext();
	}

	temp->topNode()->printNode();
}

Queue* Queue::addNode(Node& node)
{
	Queue* temp = this;
	Queue* newQueue = new Queue;
	newQueue->_client = &node;

	
	
	if (temp->_client == nullptr)
	{
		
		this->_client = &node;
//		cout << "1" << endl;
	}
	else
	{
		if (temp->getNext() == nullptr)
		{
			temp->_next = newQueue;
//			cout << "2" << endl;
		}
		else
		{
			while (temp->getNext() != nullptr)
			{
				temp = temp->getNext();
	//			cout  << "In While" << endl;
			}
			temp->_next = newQueue;
//			cout << "3" << endl;
		}
	}

	return this;

}

Node * Queue::getNode()
{
	Node* temp = this->topNode();

	

	cout << "Node Removed" << endl << endl;
	return temp;

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



Node* Queue::topNode()
{
	return this->_client;
}