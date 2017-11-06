#include "stdafx.h"
#include "Node.h"

#include <iostream>
using namespace std;

Node::Node()
{

}

Node::Node(char * name, int money)
{

	_name = name;
	_money = money;
}


int Node::getMoney()
{
	return this->_money;
}

char* Node::getName()
{
	return this->_name;
}

int Node::getId()
{
	return this->_id;
}

Node* Node::setMoney(int money)
{
	_money = money;
	return this;
}

Node* Node::setName(char* name)
{
	_name = name;
	return this;
}

Node* Node::setId(int id)
{
	_id = id;
	return this;
}

void Node::printNode()
{
	cout << _name << " " << _money << endl;
}
