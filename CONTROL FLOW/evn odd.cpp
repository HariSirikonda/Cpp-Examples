#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	if(number%2==0)
	{
		cout << "The number is an even Number.";
	}
	else
	{
		cout << "The entered number is an Odd number";
	}
	return 0;
}
