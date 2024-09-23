#include<iostream>
using namespace std;

//Base Class
class Rectangle
{
	public:
		int length;
		int breadth;
		//Constructor
		Rectangle(int l=0, int b=0)
		{
			length = l;
			breadth = b;
		}
		
		void setlength(int l)
		{
			length = l;
		}	
		
		void setbreadth(int b)
		{
			breadth = b;
		}
		
		int getlength()
		{
			return length;
		}
		
		int getbreadth()
		{
			return breadth;
		}
		
};

//Derived Class
class Cuboid : public Rectangle
{
	public:
		int height;
		Cuboid(int l=0, int b=0, int h=0)
		{
			length = l;
			breadth = b;
			height = h;
		}
		
		void setheight(int h)
		{
			height = h;
		}
		
		int getheight()
		{
			return height;
		}
		
		int volume()
		{
			return length*breadth*height;
		}
};


int main()
{
	Cuboid c(10,5,3);
	cout << "The length : " << c.getlength() << endl;
	cout << "The Breadth : " << c.getbreadth() << endl;
	cout << "The Height : " << c.getheight() << endl;
	cout << "The volume of the Cuboid : " << c.volume() << endl;
	
	return 0;
}
