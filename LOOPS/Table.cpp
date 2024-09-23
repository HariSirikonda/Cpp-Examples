#include<iostream>
using namespace std;
int main()
{
	int number,i;
	cout << "Enterr the Table number : ";
	cin >> number;
	for(i=1;i<=10;++i)
	{
		cout << number << "X" << i << "=" << i*10 << "\n";
	}
	return 0;
}
