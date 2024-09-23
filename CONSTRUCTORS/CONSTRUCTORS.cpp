#include<iostream>
using namespace std;

/*
	--> A constructor name has to be same as the class name
	--> A constructor cannot have any return type
	--> It is Automatically invoked when the object is declared.
*/

class DATE
{
	private:
		int date,month,year;	//data members
	public:
		DATE();	//This is a constructor.It has the same name as the class name.It doesn't have any return type.
		void show_data();	//member fuction to display the data	
};

int main()	//main fuction starts
{
	DATE d1;	//declaring the object
	d1.show_data();	//caling the member fuction
	return 0;
}

DATE::DATE()	//defining the constructor
{
	cout << "Enter the Date : ";
	cin >> date;
	cout << "Enter the month : ";
	cin >> month;
	cout << "Enter the year : ";
	cin >> year;
}

void DATE::show_data()	//defining the show_data() member function
{
	cout << "Displaying the date : ";
	cout << date << "/" << month << "/" << year << endl;
}
