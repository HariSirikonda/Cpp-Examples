//program for call by Address
#include<iostream>
using namespace std;

/*
	*a stores the address of the first argument.
	*b stores the address of the second argument.
*/
swap(int *a , int *b)
{
	int temp;
	temp = *a;	// temp assign the value of variable whose address is stored in the *a.
	*a = *b;	//*a assign the value of the variable whose address is stored in the *b.
	*b = temp;	//*b assign the value that is stored in the variable temp.
}

int main()
{
	int x=10,y=20;
	swap(x,y);
	
	cout << x << " " << y << endl;
	return 0; 
}
