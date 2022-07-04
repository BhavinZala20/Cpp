#include<iostream>
using namespace std;
class Rectangle
{
	int l,b;
	
	public:
	Rectangle(int x, int y)
	{
		l=x;
		b=y;
	}
	
	void area()
	{
		cout<<"Area Of Rectangle is : "<<l*b;
	}
};

int main()
{
	Rectangle r1(10, 20);
	r1.area();
	
	return 0;
}
