#include<iostream>
using namespace std;
int main()
{
	class STUDENT
	{
		private :
			int roll_no;
			char name[50];
		public :
			void put_data(int roll_no,int name);
			void get_data();
	};
	STUDENT student1;
	put_data(3,'A');
	get_data()
	
	void put_data(int roll_no,int name)
	{
		cout << "Enetr the roll no : ";
		cin >> roll_no;
	}
	void get_data()
	{
		cout << STUDENT.student1.roll_no;
	}
	return 0;
}
