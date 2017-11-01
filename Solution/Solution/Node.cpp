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
	return _money;
}

char* Node::getName()
{
	return _name;
}

int Node::getId()
{
	return _id;
}

void Node::setMoney(int money)
{
	_money = money;
}

void Node::setName(char* name)
{
	_name = name;
}

void Node::setId(int id)
{
	_id = id;
}

void Node::printNode()
{
	cout << _name << " " << _money << endl;
}
