#include<iostream>
using namespace std;

class Rectangle
{
	private:
		//Private data members
		int length;
		int breadth;
	public:
		void set_data(int l, int b)	//length and breadth Mutator
		{
			length = l;
			breadth = b;
		}
		
		int get_length()	//length accessor
		{
			return length;
		}
		
		int get_breadth()	//breadth accessor
		{
			return breadth;
		}
		
		int area()	//Area Accessor
		{
			return length*breadth;	
		}
		int perimeter()	//Peremeter Accessor
		{
			return 2*(length * breadth);	
		}
};

int main()
{
	Rectangle r1;
	
	r1.set_data(10,5);
	cout << "The length is : " << r1.get_length() << endl;
	cout << "The Breadth is : " << r1.get_breadth() << endl;
	cout << "The area is : " << r1.area() << endl;
	cout << "The Perimeter : " << r1.perimeter() << endl;
	
	return 0;
}
