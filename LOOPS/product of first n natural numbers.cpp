#include<iostream>
using namespace std;
int main()
{
	int i=1,n,product=1;
	cout << "\n\tEnter the Limit for the series : ";
	cin >> n;
	while(i<=n)
	{
		product *= i;
		i++;
	}
	cout << "\n\tThe sum of first " << n << " Natural Numbers = " << product << "\n";
	return 0;
}
