//Call by Address
#include<iostream>
using namespace std;

int * fun(int size)
{
	int *p = new int[size];
	for(int i=0 ; i<=size ; i++)
	{
		int[i] = i+1;
	}
	
	return p;
}

int main()
{
	int *ptr.fun(5);
	return 0;
}
