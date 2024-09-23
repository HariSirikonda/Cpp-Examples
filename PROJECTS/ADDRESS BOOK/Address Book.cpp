#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>
using namespace std;


// Function to save the state of a variable to a file
void saveState(int value) 
{
    std::ofstream outFile("state.txt");
    if (outFile.is_open()) 
	{
        outFile << value;
        outFile.close();
    } 
	else
	{
        cout << "Error: Unable to open file for writing." << endl;
    }
}

// Function to load the state of a variable from a file
int loadState() 
{
    int value = 0;
    std::ifstream inFile("state.txt");
    if (inFile.is_open())
	{
        inFile >> value;
        inFile.close();
    }
    return value;
}


class Contacts
{
	private:
		string name;
		string phoneNumber;
		string Email;
		long ContactNumber;
	public:
		Contacts(string n, string p, string m,long ncn)
		{
			name = n;
			phoneNumber = p;
			Email = m;
			ContactNumber = ncn;
			ncn++;
			int at_the_rate = Email.find('@');
			string mail = Email.substr(at_the_rate+1, 9);
			
			if(mail == "gmail.com")
			{	
				ofstream outFile("Database.txt", ios::app);
				outFile << "\nContact Number : " << ContactNumber;
				outFile << "\nName         : " << name;
				outFile << "\nPhone Number : " << phoneNumber;
				outFile << "\nEmail Id     : " << Email << endl;
				outFile.close();
				saveState(ncn);
				cout << "\nContact Added Succesfully :) " << endl;
			}
			else
			{
				cout << "\nContact Cannot be Added. Enter a Valid Email Id..!" << endl;
			}
		}
};


int main()
{
    static long NextContactNumber = loadState();
    
	int choice;
    string InputName;
    string InputPhoneNumber;
    string InputEmail;
	string line;
	string searchInput;
	string searchPhone;
	string searchEmail;
	string lineSearch;
	int lineNumber;
	
    do
    {
    	cout << "\n******** Welcome to Address Book ********";
		cout << "\n\n\t1.Add a new Contact.";	
        cout << "\n\t2.Search for a contact.";
        cout << "\n\t3.Display all contacts.";
        cout << "\n\t4.Exit" << endl;
        
        cout << "\nEnter your Choice : ";
        cin >> choice;
        
        switch(choice)
        {
        	case 1:
        		{
        			cout << "\nEnter the Details of a New Contact :- ";
        			cout << "\nName" << setw(6) << ": ";
        			getline(cin, InputName);
        			getline(cin, InputName);
        			cout<< "Phone" << setw(5) << ": ";
        			cin >> InputPhoneNumber;
        			cout << "Email Id" << setw(2) << ": ";
        			cin >> InputEmail;
        			
        			Contacts c(InputName, InputPhoneNumber, InputEmail, NextContactNumber);
					break;
				}
			case 2:
				{
					//Search for a contact
					bool found=false;
					lineSearch = "Name         : ";
					cout << "\nEnter the Name to Search For : ";
					getline(cin,searchInput);
					getline(cin,searchInput);
					lineSearch = lineSearch+searchInput;
					ifstream inFile("Database.txt", ios::in);
					while(getline(inFile,line))
					{
						if(line == lineSearch)
						{
							found = true;
							cout << "\nDetails Found :-" << endl;
							getline(inFile,searchPhone);
							getline(inFile,searchEmail);
							cout << "\n\t" << lineSearch << endl;
							cout << "\t" << searchPhone << endl;
							cout << "\t" << searchEmail << endl;
							
						}
						if(found == true)
							break;
					}
					if(found!=true)
						cout << "\nContact not Found :( " << endl;
					inFile.close();
					break;
				}
			case 3:
				{
					//Display all Contacts
					cout << "\nContacts in the Address Book :-" << endl;
					ifstream inFile("Database.txt");
					while(getline(inFile,line))
					{
						cout << "\t" <<line  << endl;
					}
					inFile.close();
					break;
				}
			case 4:
        		{
        			cout << "Exiting..." << endl;
					break;	
				}
			default:
				{
					cout << "\nEnter a Valid Option..!";
				}
		}
    }while (choice!=4);
    
    return 0;
}