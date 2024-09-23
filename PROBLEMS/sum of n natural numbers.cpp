#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout << "\n\tEnter the Limit for the series : ";
	cin >> n;
	while(i<=n)
	{
		sum += i;
		i++;
	}
	cout << "\n\tThe sum of first " << n << " Natural Numbers = " << sum << "\n";
	return 0;
}
