// Run-time polymorphism
#include<iostream>
using namespace std;

class Parent
{
	public:
	virtual	void print()
	{
		cout << " print func from parent class" << endl;
	}	
	
	void display()
	{
		cout << " display func form parent class" << endl;
	}
};

class Child : public Parent
{
	public:
	void print()
	{
		cout << " print func from child class" << endl;
	}	
	
	void display()
	{
		cout << " display func form child class" << endl;
	}		
};


int main()
{
	Parent *ptr1;
	Child ch;
	
	ptr1 = &ch;
	
	ptr1 -> print();
	ptr1 -> display();	
	
	return 0;
}
