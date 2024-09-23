#include<iostream>
#include<ostream>
using namespace std;

class Complex
{
	private:
		int real;
		int img;
	public:
		Complex(int r=0,int i=0)
		{
			real = r;
			img = i;
		}
		
		ostream &operator<<(ostream &out, Complex &c)
		{
			out << real << "+i" << img;
		}
};

int main()
{
	Complex c1(3,7);
	cout<< c1;
}
