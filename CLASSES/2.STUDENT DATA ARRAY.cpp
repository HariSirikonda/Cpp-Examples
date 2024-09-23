#include<iostream>
using namespace std;

class STUDENT
{
	private:
		int roll_no;
		char name[50];
		char grade;
	public:
		void get_data()
		{
			cout << "Enter roll no : ";
			cin >> roll_no;
			cout << "name : ";
			cin >> name;
			cout << "grade : ";
			cin >> grade;
		}
		void put_data()
		{
			cout << "Roll no : " << roll_no << endl;
			cout << "Name : " << name << endl;
			cout << "grade : " << grade << endl;
		}
};

int main()
{
	STUDENT obj[3];
	
	for(int i=0 ; i<3 ; i++)
	{
		obj[i].get_data();
	}
	
	for(int i=0 ; i<3 ; i++)
	{
		obj[i].put_data();
	}
	
	return 0;
}
