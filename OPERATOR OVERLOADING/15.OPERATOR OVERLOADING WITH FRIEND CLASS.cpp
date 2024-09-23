#include<iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int img;
	public:
		Complex(int r=0, int i=0)
		{
			real = r;
			img = i;
		}
		//Friend function
		friend Complex operator+(Complex x1,Complex x2);
		void print()
		{
			cout << real << " " << img << endl;
		}
};

//No return type required for the definition of friend class
Complex operator+(Complex x1, Complex x2)
{
	Complex t;
	t.real = x1.real+x2.real;
	t.img = x1.img+x2.img;
	return t;
}

int main()
{
	Complex c1(3,7);
	Complex c2(1,5);
	Complex c3;
	
	c3 = c1+c2;
	c3.print();
}
