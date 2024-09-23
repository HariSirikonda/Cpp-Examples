//Call by Reference
#include<iostream>
using namespace std;

/*
	This will take the addresses of arguments.
	Whatever the changes i make to the formal parameters,
	will definitely effect the Actual parameters.
	
	Hence, the variables are swapped.
*/

swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a=10,b=20;
	swap(a,b);
	
	cout << a << " " << b << endl;
	return 0;
}
