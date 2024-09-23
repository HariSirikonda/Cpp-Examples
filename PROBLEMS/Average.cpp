#include<iostream>
using namespace std;
int main()
{
	int number1,number2,number3,number4,number5;
	float avg,total;
	cout << "Enter the five numbers : ";
	cin >> number1 >> number2 >> number3 >> number4 >> number5;
	total = number1+number2+number3+number4+number5;
	avg = total/5;
	cout << "The Average of the above numbers : " << avg;
	return 0;
}













