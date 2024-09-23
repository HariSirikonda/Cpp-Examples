#include<iostream>
using namespace std;

int main()
{
	//We can only access the variable in constant.
	//we cannot modify the constant variable.
	
	int x = 10;
	int y = 20;
	int * const ptr = &x;	//this is a constant pointer of integer type
	cout << *ptr;	
	//ptr = &y;	//error //we can only assign the pointer one time
	++(*ptr);

	return 0;
}