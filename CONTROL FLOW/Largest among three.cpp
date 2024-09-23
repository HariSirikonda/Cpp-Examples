#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter three numbers here : ";
	cin >> a >> b >> c;
	if(a>=b)
	{
		if(a>=c)
		{
			cout << "The number " << a << "is the Biggest number amoung the  three numbers.";
		}
		else
		{
			cout << "The number " << c << "is the Biggest number among the three numbers.";
		}
	}
	if(b>=c)
	{
		cout << "The Number " << b << "is the Biggest number among the three numbers.";
	}
	return 0;
}
