#include<iostream>
using namespace std;

class Differenciate
{
	private:
		char value;
		int exponent;
	public:
		Differenciate(int e=0)
		{
			value = 'X';
			exponent = e;
			
			cout << endl << "After Differentiation..." << endl << e << value << "^" << e-1 << endl; 
		}
};

int main()
{
	int exponent;
	cout << "Enter the Exponent : ";
	cin >> exponent;
	Differenciate d1(exponent);
	return 0;
}
