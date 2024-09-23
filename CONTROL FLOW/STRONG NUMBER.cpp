#include<iostream>
using namespace std;
int main()
{
	int number,temporary,remainder,i,product,sum=0;
	cout << "Enter the number : ";
	cin >> number;
	temporary = number;
	while(number>0)
	{
		product = 1;
		remainder = number%10;
		for(int n=1;n<=remainder;n++)
		{
			product = product*n;
		}
		sum = sum+product;
		number = number/10;
	}
	if(sum==temporary)
	{
		cout << "The entered number is a strong number...";
	}
	else
	cout << "Not a strong number...";
	return 0;
}
