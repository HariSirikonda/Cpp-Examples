#include<iostream>
using namespace std;

class DATE
{
	public:
		int date,month,year;
};

int main()
{
	DATE d1;
	d1.date = 07;
	d1.month = 10;
	d1.year = 2004;
	cout << "The date is  : " << d1.date << "/" << d1.month << "/" << d1.year;
	return 0;
}

