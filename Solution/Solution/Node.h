
class Node
{
public:
	Node();
	Node(char*,int);
	

	int getMoney();
	char* getName();
	int getId();
	
	void setMoney(int);
	void setName(char*);
	void setId(int);

	void printNode();

private:
	int _id;
	int _money;
	char* _name;





};