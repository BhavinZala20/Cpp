#include<iostream>
using namespace std;

class Node
{
	public:
		string name;	
		Node *next;
	
/*	Node()
	{
		name = 0;
		next = NULL;
	}
*/	
		Node(string i)
		{
			name = i;
			next = NULL;
		}
};

int main()
{
	Node n1("My");	
	Node n2("Name");
	Node n3("is");
	Node n4("Bhavin");
	Node n5("Zala");
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	
	cout << n1.name << "->" << n1.next->name << "->" << n1.next->next->name << "->" << n1.next->next->next->name << "->" << n1.next->next->next->next->name;
	
	return 0;
}


