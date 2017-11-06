
class Node
{
public:
	Node();
	Node(char*,int);
	

	int getMoney();
	char* getName();
	int getId();
	
	Node* setMoney(int);
	Node* setName(char*);
	Node* setId(int);

	void printNode();

private:

	int _id;
	int _money;
	char* _name;





};