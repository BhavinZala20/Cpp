#include<iostream>

using namespace std;
//function declaration
void add(int, int, int);
void sub(int, int, int);
void mul(int, int, int);
void div(int, int, int);

int main()
{
	int i,j,ch;
	cout<<"Enter Value of i & j: ";
	cin>>i>>j;
	cout<<endl<<" 1 : +";
	cout<<endl<<" 2 : -";
	cout<<endl<<" 3 : *";
	cout<<endl<<" 4 : /";
	
	cout<<endl<<"Enter Your Choice : ";
	cin>>ch;
	
	//Function Call
	add(i,j,ch);
	sub(i,j,ch);
	mul(i,j,ch);
	div(i,j,ch);
	
	
	return 0;
}

//function definition / Body
void add(int a, int b, int c)
{
	switch(c)
	{
		case 1:
				cout<<endl<<"SUM = "<<a+b;
			break;
	/*	case 2:
				cout<<endl<<"SUB = "<<a-b;
			break;
		case 3:
				cout<<endl<<"MUL = "<<a*b;
			break;
		case 4:
				cout<<endl<<"DIV = "<<a/b;
			break;
	*/
	
		default:
			cout<<endl<<"Improper Choice";
	}
}

switch(ch)
{
	case 1:
		void sub(int a, int b, int c)
	{
		cout<<endl<<"SUB = "<<a-b;
	}

		
}


void mul(int a, int b, int c)
{
	cout<<endl<<"MUL = "<<a*b;
}

void div(int a, int b, int c)
{
	cout<<endl<<"DIV = "<<a/b;
}