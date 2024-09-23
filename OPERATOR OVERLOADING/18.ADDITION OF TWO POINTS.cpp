#include<iostream>
using namespace std;

class Point{
	private:
		float x;
		float y;
	public:
		Point(float i=0,float j=0)
		{
			x = i;
			y = j;
		}
		
		friend Point operator+(Point f1, Point f2);		
		void print()
		{
			cout << x << "," << y << endl;
		}
};

Point operator+(Point f1, Point f2)
{
	Point temp;
	temp.x = f1.x+f2.x;
	temp.y = f1.y+f2.y;
	return temp;
}

int main()
{
	Point p1(1.5,4.5);
	Point p2(3,5);
	Point p3;
	
	p3 = p1+p2;
	p3.print();
}













