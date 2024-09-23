#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	if(number<0)
	{
		cout << "The number is a Negative Number.";
	}
	else if(number>0)
	{
		cout << "The number is a Positive number.";
	}
	else
	{
		cout << "It is Zero neither positive nor Negative";
	}
	return 0;
}
