#include<iostream>
using namespace std;

class Complex
{
	public:
		int real;
		int img;
	public:
		//Constructor with default parameters
		Complex(int r=0, int i=0)
		{
			real = r;
			img = i;
		}
		
		//function for addition of complex 
		Complex add(Complex x)
		{
			Complex temp;	//creates a Temporary variable with real,img in it.
			temp.real = real+x.real;	//temp.real = c1.real + c2.real
			temp.img = img+x.img;	//temp.img = c1.img + c2.img
			return temp;
		}
		
		void print()
		{
			cout << real << " " << img << endl;
		}

};
int main()
{
	Complex c1(3,7);
	Complex c2(5,7);
	Complex c3;
	
	c3 = c1.add(c2);
	c3.print();
}


