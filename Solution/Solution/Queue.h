#include "Node.h"

class Queue
{
public:
	Queue();
	Queue(Queue& fake);
	
	Queue* addNode(Node&);
	Node* getNode();
	Node* topNode();
	void setNode(Node* node);
	void isEmpty();
	void printQueue();

	Queue* getNext();
	void setNext(Queue*);

	

private:
	
	Node *_client;
	Queue *_next;
	




};