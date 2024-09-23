#include<iostream>
using namespace std;
int main()
{
	int number;
	take_input:
	cout << "Enter  the number between 1 to 100 : ";
	cin >> number;
	if(1<=number<=100)
	{
		if(number%3 == 0)
		{
			cout << "Fizz";
		}
		else if(number%5 == 0)
		{
			cout << "Buzz";
		}
		else if(number%3==0 && number%5 == 0)
		{
			cout << "FizzBuzz";
		}
		else
		{
			cout << number;
		}
	}
	else
	{
		cout << "Enter a valid number";
		goto take_input;
	}
}
