#include<iostream>
#include<cstring>
#include<map>
#include<fstream>
using namespace std;

class Account
{
	private:
		long AccountNumber;
		string fname,lname;
		long balance;
		static long NumberOfAccounts;
	public:
		Account(){} // Default Constructor
		Account(string f,string l, long b)	//Parametrised constructor
		{
			AccountNumber = NumberOfAccounts;
			NumberOfAccounts++;
			fname = f;
			lname = l;
		}
		long getAccNumber(){return AccountNumber;}
		static int getNumberOfAccounts(){return NumberOfAccounts;}
		string getFirstName(){return fname;}
		string getLastName(){return fname;}
		long getBalance(){return balance;}
};

//Initializng the Number of Account
long Account::NumberOfAccounts = 1; 

class Bank
{
	private:
		map<int,string> accounts;
	public:
		Account OpenAccount(string f,string l, long b)
		{
			ofstream outFile;
			Account account(f,l,b);
			
			accounts.insert(pair<long,Account>(account.getAccNumber() , account));
			outFile.open("BankData.txt", ios::trunc);	//Open the File
			
			map<long,Account>::iterator itr;
			for(itr=accounts.begin() ; itr!=accounts.end() ; itr++)
			{
				outFile << itr->second;
			}
			outFile.close();
			return Account;
		}
		Account DeleteAccount();
		Account ShowAllAccounts();
		Account Deposit();
		Account Withdraw();
		void BalanceEnquiry(long accNo)
		{
			ifstream inFile;
		}
		void CloseAccount();
};

int main()
{
	Bank b;
	Account acc;
	int choice;
	string firstName,LastName;
	long InputBalance;
	long InputAccountNumber;

	do
	{
		cout << "\n\n\t\t\t\t\t\t\t*****BANKING SYSTEM*****\n";
		cout << "\n\t\t\t 1.Open Account";
		cout << "\n\t\t\t 2.Balance Enquiry";
		cout << "\n\t\t\t 3.Deposit";
		cout << "\n\t\t\t 4.Withdrawal";
		cout << "\n\t\t\t 5.Close an Account";
		cout << "\n\t\t\t 6.Show all Accounts";
		cout << "\n\t\t\t 7.Quit\n";

		cout << "\nEnter Your Choice : ";
		cin >> choice;

		switch(choice)
		{
			case 1:
				cout << "\nOpenning New Account..." << endl;
				cout << "Enter the First name : ";
				cin >> firstName;
				cout << "Enter the Last name : ";
				cin >> LastName;
				cout << "Enter The Balance Init : ";
				cin >> InputBalance;
				acc = b.OpenAccount(firstName,LastName,InputBalance);
				cout << "Account Opened Successfully :)";
				break;
			case 2:
				cout << "Enter the Account Number : ";
				cin >> InputAccountNumber;
				acc = b.BalanceEnquiry()
			case 7:
				cout << "Exiting..." << endl;
				break;
		}
	}while(choice!=7);
}