#include<iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	
	const int * const ptr = &x;
	
	cout << *ptr << endl;
	
	//ptr = &y;	//Error
	//++(*ptr);	//Error
	
	return 0;
}