#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	private:
		int RollNum;
		string name;
		int m1,m2,m3;
		int Total;
		char Grade;
	public:
		Student()	//Constructor
		{
			cout << "Enter the Student name : ";
			getline(cin,name);
			cout << "Enter the Roll Number : ";
			cin >> RollNum;
			cout << "Enter the marks in 3 subjects : ";
			cin >> m1 >> m2 >> m3;
		}
		int CalculateTotal()
		{
			Total = m1+m2+m3;
			
			//Try catch Block to check valid marks
			try
			{
				if(Total > 300)
					throw Total;
			}
			catch(int t)
			{
				cout << "Enter Valid Marks..!";
				throw;	//Stops execution
			}
		}
		void CalculateGrade()
		{
			if(Total <= (0.40*300))
				Grade = 'C';
			else if(Total > (0.40*300) && Total <= (0.60*300))
				Grade = 'B';
			else
				Grade = 'A';
		}
		void PutData()
		{
			
			cout << endl;
			cout << "Displaying the Content..." << endl;
			cout << "Name of the Student : " << name << endl;
			cout << "Total Marks Obtained : " << Total << "/" << "300" << endl;
			cout << "The Grade : " << Grade << endl;
		}
};

int main()
{
	Student s1;
	s1.CalculateTotal();
	s1.CalculateGrade();
	s1.PutData();
}
