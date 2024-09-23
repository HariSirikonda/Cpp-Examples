#include<iostream>
using namespace std;

class DATE	//class declaration
{
	private:
		int date,month,year;
	public:
		DATE(int d,int m,int y = 2004);
		void show_data();
};

int main()	//main fuction starts
{
	DATE d1(07,10,1997);	//here year = 1997.The default value of year that is 2004 is OVERWRITTEN by 1997.
	DATE d2(25,11);	//The value of year is not given but it was taken from the class DATE as the default parameter
	d1.show_data();
	d2.show_data();
}

DATE::DATE(int d,int m,int y)	//defining the member fuction
{
	date = d;
	month = m;
	year = y;
}

void DATE::show_data()	//defining the member fuction
{
	cout << "Date = ";
	cout << date << "/" << month << "/" << year;
}
