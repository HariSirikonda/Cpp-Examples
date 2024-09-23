//Program for call by value
#include<iostream>
using namespace std;


int swap(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	
	/*
		After completely execution of the swap function,
		the variables temp,x,y are deleted form the Activation record of the main function.
		
		I am terming it as the main function, because the call by value usually replaces the 
		swap function with the code in it inside the main function.
	*/
}

int main()
{
	int a = 10, b = 20;
	swap(a,b);
	/*
		The values are not swaped, because the swapped variable are deleted.
	*/
	cout << a << " " << b << endl;
	return 0;
}
