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
class Queue
{
	public:
		Node *front;
		Node *rear;
		Queue()
		{
			front=NULL;
			rear=NULL;
		}
		void enqueue(int i)
		{
			Node *temp=new Node(i);
			if(front==NULL && rear==NULL)
			{
				front=temp;
				rear=temp;
			}
			else
			{
				rear->next=temp;
				rear=temp;
			}
		}
		void dequeue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is EMPTY..!";
			}
			else
			{
				Node *temp=front;
				front=front->next;
				if(front==NULL)
				{
					rear=NULL;
				}
				cout<<endl<<temp->no<<" is dequeued";
				delete temp;
			}
		}
		void printQueue()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<endl<<"Queue is EMPTY..!";
			}
			else
			{
				Node *ptr = front;
				do
				{
					cout<<ptr->no<<" -> ";
					ptr=ptr->next;
				}while(ptr!=rear->next);
			}
			
		}
};

int main()
{
	Queue q;
	int i,ch;

	
	do 
	{
		cout<<endl<<"Enter the Value of Operations"<<endl<<"Press 1 for Enqueue"<<endl<<"Press 2 for Dequeue"<<endl<<"Press 3 for Print"<<endl<<"Pree 4 for Exit"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter Value ";
				cin>>i;
				q.enqueue(i);
			break;
				
			case 2:
				q.dequeue();
			break;
				
			case 3:
				q.printQueue();
			break;
				
			case 4:
				exit;
			break;
			
		}
			
	}while(ch!=4);
	
	return 0;
}
