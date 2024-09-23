#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual int area() = 0;	//Pure virtual function
		virtual int peremeter() = 0;	//Pure virtual function
};

class Rectangle:public Shape
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int l,int b)
		{
			length = l;
			breadth = b;
		}
		int area()
		{
			return length*breadth;	
		}
		int peremeter()
		{
			return 2*(length+breadth);	
		}
};

class Circle:public Shape
{
	private:
		float radius;
	public:
		Circle(int r)
		{
			radius = r;
		}
		int area()
		{
			return 3.14*radius*radius; 
		}
		int peremeter()
		{
			return 2*3.14*radius;
		}
};

int main()
{
	Shape *obj;
	obj = new Rectangle(10,5); //pointer pointing the rectangle
	cout << "The area of the Given Rectangle is : " << obj->area() << endl;
	cout << "The peremeter of the Given Rectangle is : " << obj->peremeter() << endl;
	
	obj = new Circle(5);	//Pointer pointing the circle
	cout << "The area of the circle : " << obj->area() << endl;
	cout << "The Peremeter of the circle : " << obj->peremeter() << endl;
	
	return 0;
}