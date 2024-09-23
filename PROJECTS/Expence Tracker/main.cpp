#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class BalanceSheet
{
	private:
		string name;
		int Income;
		int Expence;
	public:
		BalanceSheet(string n,int i,int e)
		{
			Income = i;
			Expence = e;
			ofstream outFile("DataBase.txt");
			outFile << "\nName : " << n;
			outFile << "\nIncome : " << i;
			outFile << "\nExpence : " << e;
		}
};

int main()
{
	int choice;
	do
	{
			cout << "\n******* Welcome to Expence Tracker ********";
			cout << "\n\t1.Add Income.";
			cout << "\n\t2.Add Expence.";
			cout << "\n\t3.View Summary.";
			cout << "\n\t4.Exit...";
			
			cout << "\nEnter Your Choice : ";
			cin >> choice;
			
			switch(choice)
			{
				case 1:
					
					break;
			}
			
	}while(choice!=4);
}