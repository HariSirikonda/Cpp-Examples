#include<iostream>
using namespace std;

class DATE
{
	private:
		int date,month,year;
	public:
		void set_date()	//public member function
		{
			cout << "Enter the date : ";
			cin >> date;
			cout << "Enter the month : ";
			cin >> month;
			cout << "Enter the year : ";
			cin >> year;
		}
		void show_date()	//public member function
		{
			cout << "The date is : " << date << "/" << month << "/" << year;
		}
};

int main()
{
	DATE d1;
	d1.set_date();	//calling a public member function.
	d1.show_date();	//calling a public member function.
	return 0;
}


