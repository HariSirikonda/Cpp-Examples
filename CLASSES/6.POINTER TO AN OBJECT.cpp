#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		int area()
		{
			return length*breadth;
		}
		int peremeter()
		{
			return 2*(length+breadth);
		}
};

int main()
{
	Rectangle r1;	//Creating an Object in Rectangle class
	Rectangle *p;	//creating a pointer in stack
	p = &r1;	//assigning the address of r1 to the pointer p
	
	p->length = 10;	//r1.length
	p->breadth = 5;	//r1.breadth
	
	cout << "Area : " << p->area() << endl;
	cout << "Peremeter : " << p->peremeter() << endl;
}
