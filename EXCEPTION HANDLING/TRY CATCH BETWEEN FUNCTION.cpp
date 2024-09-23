#include<iostream>
using namespace std;

int divition(int x,int y)
{
	if(y==0)
	throw y;
	return x/y;
}

int main()
{
	int a=10,b=0,c;
	try
	{
		if(b==0)
		throw b;
		
		else
		{
			c = divition(a,b);
			cout << c;
		}
		
	}
	catch(int e)
	{
		cout << "Denominator cannot be Zero ";
	}
}