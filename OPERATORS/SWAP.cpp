#include<iostream>
using namespace std;
int main()
{
	int number1,number2,temp;
	cout << "\n Number 1 :";
	cin >> number1;
	cout << "\n Number 2 : ";
	cin >> number2;
	temp = number1;
	number1 = number2;
	number2 = temp;
	
	cout << "Values after swapping..."<< endl;
	cout << "\nNumber 1 : " << number1;
	cout << "\nNumber 2 : " << number2;
}
