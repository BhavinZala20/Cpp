#include<iostream>
using namespace std;

class A
{
	public:
	int i=5, j=5;
//	cin>>i>>j;
		
	void add()
	{
		cout << "Addition is : "<< i+j << endl;
	}	
};

class B : public A
{
	public:
		void mul()
		{
			cout << "Multiplication is : " << i*j << endl;
		}
};

class C : public B
{
	public:
		
};

int main()
{
	C c;
	c.add();
	c.mul();
		
	return 0;
	
}
