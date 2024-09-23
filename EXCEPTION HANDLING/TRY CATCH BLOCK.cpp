#include<iostream>
using namespace std;

int main()
{
	int a=10,b=0,c;
	try
	{
		if(b==0)
		throw b;
		
		else
		{
			c = a/b;
			cout << c;
		}
		
	}
	catch(int e)
	{
		cout << "Denominator cannot be Zero ";
	}
}