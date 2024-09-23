#include<iostream>
using namespace std;


class DATE_TYPE
{
	private:
		int date;
	public:
		int month,year;
};

int main()
{
	DATE_TYPE d1;
	d1.month = 4;
	d1.year = 2004;
	cout << "Date : " << d1.month << "/" << d1.year;
	//d1.date = 13;
	//cout << d1.date;	This shows an error.because the "date" is declared as private in the class DATE_TYPE
	return 0;
}
