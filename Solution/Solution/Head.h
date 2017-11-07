#include "Queue.h"

class Head
{
public:
	
	Head();
	Head(Queue* );

	Queue* addNode(Node&);
	Node* getNode();
	Node* topNode();
	void setNode(Node* node);
	bool isEmpty();
	void printQueue();
	
private:

	Queue *_head;



};