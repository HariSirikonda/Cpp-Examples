#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout << "Enter a limit : ";
	cin >> n;
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			cout << i << "\t";
		}
	}
	return 0;
}
