#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	int i,factors=0;
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			factors++;
		}
	}
	if(factors==2)
	{
		cout << "The given number is a Prime Number.";
	}
	else
	{
		cout << "The given number is a Composite number.";
	}
}
