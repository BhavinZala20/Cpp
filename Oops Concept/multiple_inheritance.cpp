#include<iostream>
using namespace std;

class A
{
	public:
		void print1()
		{
			cout << "Class A" << endl;	
		}	
};

class B
{
	public:
		void print2()
		{
			cout << "Class B" << endl;	
		} 
};

class C : public A, public B
{
	public:
	/*	void print3()
		{
			cout << "Class C" << endl;	
		}	
	*/
};

int main()
{
	C c;
	c.print1();
	c.print2();
//	c.print3();
	
	return 0;
}
