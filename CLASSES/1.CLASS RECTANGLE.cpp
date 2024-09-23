#include<iostream>
using namespace std;

class Rectangle
{
	public:		//Access specifier
		//Data members
		int length;
		int breadth;
		//member functions
		void area()
		{
			return length*breadth;
		}
		
		void peremeter()
		{
			return 2*(length*breadth);
		}
};

int main()
{
	Rectangle r1;
	
	//access the data members using dot operator
	r1.length = 10;
	r1.breadth = 5;	
	
	cout << "Area is " << r1.area() << endl;	//Printing the area
	cout << "Peremeter is " << r1.peremeter() << endl;	//printing the peremeter
}
