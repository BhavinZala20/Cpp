#include<iostream>
using namespace std;

//function declaration
void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main()
{
	int i,j,choice;
	cout<<"Enter Value of i & j: ";
	cin>>i>>j;
	
	cout<<endl<<" Press 1 for (+)";
	cout<<endl<<" Press 2 for (-)";
	cout<<endl<<" Press 3 for (*)";
	cout<<endl<<" Press 4 for (/)"<<endl;
	
	cout<<endl<<"Enter Your Choice : ";
	cin>>choice;
	
	//Function Call

		switch(choice)
		{
		case 1 :
				add(i,j);
			break;
		
		case 2 :
				sub(i,j);
			break;
		
		case 3 :
				mul(i,j);
			break;
		
		case 4 :
				div(i,j);
			break;
		
		default:
			break;
		}
	
	return 0;
}

//function definition / Body

void add(int a, int b)
{
	cout<<endl<<"Addition is : "<<a+b;
}

void sub(int a, int b)
{
	cout<<endl<<"Subtraction is : "<<a-b;
}

void mul(int a, int b)
{
	cout<<endl<<"Multiplication is : "<<a*b;
}

void div(int a, int b)
{
	cout<<endl<<"Division is : "<<a/b;
}
