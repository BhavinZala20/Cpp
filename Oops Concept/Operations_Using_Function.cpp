#include<iostream>
using namespace std;

//function declaration
void add(int, int);
void sub(int, int);
void mul(int, int);
void divi(int, int);

int main()
{
	int i,j,ch;
	cout<<"Enter Value of i & j: ";
	cin>>i>>j;
	
	cout<<endl<<" Press 1 for (+)";
	cout<<endl<<" Press 2 for (-)";
	cout<<endl<<" Press 3 for (*)";
	cout<<endl<<" Press 4 for (/)"<<endl;
	
	cout<<endl<<"Enter Your Choice : ";
	cin>>ch;
	
	//Function Call
		
		switch(ch)
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
				divi(i,j);
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

void divi(int a, int b)
{
	cout<<endl<<"Division is : "<<a/b;
}
