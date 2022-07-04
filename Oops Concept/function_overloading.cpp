// Function Overloading // Compile-time polymorphism

#include<iostream>
using namespace std;

class A
{
	public:
	void fun()
	{
		cout << "Function With No Argument" << endl;	
	}
	
	void fun(int x)
	{
		cout << "Function With int Argument" << endl;
	}	
	
	void fun(double x)
	{
		cout << "Function with double Argument" << endl;
	}
};

int main()
{
	A a;
	a.fun();
	a.fun();
	a.fun();
	return 0;
}
