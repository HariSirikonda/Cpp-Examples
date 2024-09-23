//program for simple interest
#include<iostream.h>
using namespace std;
int main()
{
	int principle,time,interest;
	float simple_interest;
	cout << "Enter the Principle amount : ";
	cin >> principle;
	cout << "Enter the time period : ";
	cin >> time;
	cout << "Enter the Interest rate : ";
	cin >> interest;
	simple_interest = (principle*time*interest)/100;
	cout << "The simple Interest = " << simple_interest;
	return 0;
}
