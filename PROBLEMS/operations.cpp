#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char operation;
	cout << "Enter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	cout << "What is the operation do you want to perform : ";
	cin >> operation;
	if(operation == '+' || '-' || '*' || '/')
	{
		if(operation == '+')
		{
			cout << "The addition of two numbers = " << num1+num2;
		}
		else if(operation == '-')
		{
			cout << "The Subtraction of two number = " << num1-num2;
		}
		else if(operation == '*')
		{
			cout << "The Multiplication of two numbers = " << num1*num2;
		}
		else if(operation == '/')
		{
			cout << "The division of two numbers = " << num1/num2;
		}
	}
	else
	{
		cout << "Please enter a proper operation..!";
	}
	return 0;
}
