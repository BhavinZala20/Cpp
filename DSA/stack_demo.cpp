#include<iostream>
using namespace std;
class Node
{
	public:
		int no;
		Node *next;
		
		Node()
		{
			no=0;
			next=NULL;	
		}
		Node(int n)
		{
			no=n;
			next=NULL;	
		}	
};
class Stack
{
	public:
		Node *tos;
		
		Stack()
		{
			tos=NULL;	
		}
		void push(int i)
		{
			Node *temp = new Node(i);
			if(tos==NULL)
			{
				tos=temp;
			}
			else
			{
				temp->next=tos;
				tos=temp;
			}
		}
		void pop()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Satck is EMPTY...!";
			}
			else
			{
				Node *temp=tos;
				tos=tos->next;
				cout<<endl<<temp->no<<" is POPED";
				delete temp;
			}
		}
		void printStack()
		{
			if(tos==NULL)
			{
				cout<<endl<<"Stack is EMPTY";
			}
			else
			{
				Node *ptr = tos;
				while(ptr!=NULL)
				{
					cout<<ptr->no<<" <- ";
					ptr=ptr->next;
				}
			}
		}
};

int main()
{
	Stack s;
	int i,ch;

	
	do 
	{
		cout<<endl<<"Enter the Value of Operations"<<endl<<"Press 1 for Push"<<endl<<"Press 2 for Pop"<<endl<<"Press 3 for Print"<<endl<<"Pree 4 for Exit"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter Value ";
				cin>>i;
				s.push(i);
			break;
				
			case 2:
				s.pop();
			break;
				
			case 3:
				s.printStack();
			break;
				
			case 4:
				exit;
			break;
		}
			
	}while(ch!=4);
	
	
	return 0;
}
