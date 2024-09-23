#include<iostream>
using namespace std;

void is_palindrome(int number)
{
	int remainder,duplicate,new_number=0,i=1;
	duplicate = number;
	do
	{
		remainder = number%10;
		new_number = new_number + (i*remainder);
		i = i*10;
		number = number/10;
	}
	while(number>0);
	if(duplicate == new_number)
	{
		cout << "This is a Palindrome number.";
	}
	else
	{
		cout << "This is not a palindrome number.";
	}
}

int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	is_palindrome(number);
	return 0;
}
