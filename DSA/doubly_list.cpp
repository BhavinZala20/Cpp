#include<iostream>
using namespace std;

class Node
{
	public:
		string name;
		Node *next;
		Node *prev;
		
		Node(string s)
		{
			name = s;
			next = NULL;
			prev = NULL;
		}	
};

void displayNode(Node *ptr)
{
	if(ptr == NULL)
	{
		return;
	}
	
	cout << ptr->name << "->";
	displayNode(ptr->next);
	cout << ptr->name << "->";
}

int main()
{
	Node n1("Apples");
	Node n2("Bananas");
	Node n3("Mangoes");
	
	Node *head = &n1;
	Node *tail = NULL;
	
	n1.next = &n2;
	n2.next = &n3;
	
	n3.prev = &n2;
	n2.prev = &n1;
	
	head = &n1;
	displayNode(head);
	return 0;
}
