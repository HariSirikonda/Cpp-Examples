#include<iostream>
using namespace std;

/*
	--> A constructor name has to be same as the class name
	--> A constructor cannot have any return type
	--> It is Automatically invoked when the object is declared.
*/

class DATE	//class declaration
{
	private:
		int date,month,year;	//data members
	public:
		DATE();	//constructor
		DATE(int d,int m,int y);	//parameterised constructor.We pass some arguments in it.
		void show_data();	//member fuction
};

int main()	//main function starts
{
	DATE d1;	//declaring the first object using default constructor
	DATE d2(07,10,2004);	//declaring the second object using parameterised constructor
	d1.show_data();	
	d2.show_data();
}

DATE::DATE()	//defining the constructor
{
	cout << "Enter the date : ";
	cin >> date;
	cout << "Enter the month :";
	cin >> month;
	cout << "Enter the year : ";
	cin >> year;
}

DATE::DATE(int d,int m,int y)	//defining the parameterised constructor
{
	date = d;
	month = m;
	year = y;
}

void DATE::show_data()	//defining the show_date() member function
{
	cout << "Displaying the date : ";
	cout << date << "/" << month << "/" << year << endl;
}

