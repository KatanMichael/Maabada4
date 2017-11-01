#include "Node.h"

class Queue
{
public:
	Queue();
	
	void addNode(Node&);
	Node getNode();
	Node topNode();
	void setNode(Node* node);
	void isEmpty();
	void printQueue();

	Queue* getNext();
	void setNext(Queue);

	Node *_client;
	Queue *_next;

private:

	




};