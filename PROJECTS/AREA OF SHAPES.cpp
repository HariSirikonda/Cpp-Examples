#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual void area() = 0;		
};

class Rectangle:public Shape
{
	private:
		int len;
		int bre;
	public:
		Rectangle()
		{
			cout << "Enter the Length of Rectangle : ";
			cin >> len;
			cout << "Enter the breadth of the Rectangle :";
			cin >> bre;
		}
		void area()
		{
			cout << "The Area of the rectangle : " << len*bre << endl;
		}
};

class Circle:public Shape
{
	private:
		float radius;
	public:
		Circle()
		{
			cout << "Enter the Radius of the Circle : ";
			cin >> radius;
		}
		void area()
		{
			cout << "The Area of the circle is : " << 3.14*radius*radius << endl;
		}		
};

class Square:public Shape
{
	private:
		int side;
	public:
		Square()
		{
			cout << "Enter the Side of the Suare : ";
			cin >> side;
		}
		void area()
		{
			cout << "The Area of the Square is : " << side*side << endl;
		}		
};

int main()
{
	int choice;
	do
	{
		cout << "\n1. Area of Rectangle.";
		cout << "\n2. Area of Circle.";
		cout << "\n3. Area of Square.";
		cout << "\n4. Exit." << endl;
		cout << "\nEnter your choice : ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				{
					Rectangle r1;
					r1.area();
					break;
				}
			case 2:
				{
					Circle c1;
					c1.area();
					break;
				}
				
			case 3:
				{
					Square s1;
					s1.area();
				}
			case 4:
				break;
			default:
				{
					cout << "Enter a Valid Choice..!" << endl;
					break;
				}
		}
	}while(choice!=4);
	
	return 0;
}