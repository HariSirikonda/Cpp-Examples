#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;

int CheckValid(string check)
{
	int correctname = 0;
	string line;
	ifstream inFile("DataBase.txt",ios::in);
	while(getline(inFile,line))
	{
		if(line==check)
		{
			correctname = 1;
			return correctname;
			break;	
		}
	}
	if(correctname!=1)
		return correctname;
	inFile.close();
}

void saveState(int count)
{
	ofstream outFile("State.txt");
	outFile << count;
	outFile.close();
}

long loadState()
{
	long value = 0;
	ifstream inFile("State.txt");
	inFile >> value;
	return value;
	inFile.close();
}

class Books
{
	private:
		long BookNumber;
		string Title;
		string Author;
		long ISBN;
		bool State;
	public:
		Books(string T,string A,long I,long nbn,bool S=false)
		{
			Title = T;
			Author = A;
			ISBN = I;
			State = S;
			BookNumber = nbn;
			nbn++;
			saveState(nbn);
			
			ofstream outFile("DataBase.txt",ios::app);
			outFile << "\nBook Number : " << BookNumber;
			outFile << "\nBook Title  : " << Title;
			outFile << "\nAuthor      : " << Author;
			outFile << "\nISBN        : " << ISBN;
			if(State == 0)
				outFile << "\nState       : " << Title <<" [ Not Issued ]" << endl;
			else
				outFile << "\nState       : "<< Title << " [ Issued ]" << endl; 
			outFile.close();
			
			cout << "\nBook Added Successful :)" << endl;
		}
};


int main()
{
	int choice;
	static long NextBookNumber = loadState();
	string InputBookName;
	string InputAuthor;
	long InputISBN;
	/*
	long searchInput;
	string TempBookNumber;
	string tempTitle;
	string tempAuthor;
	long tempISBN;
	bool tempState;
	*/
	
	do
	{
		cout << "\n******** Welcome to Library Management ********" << endl;
		cout << "\n\t1.Add a New Book.";
		cout << "\n\t2.Issue a Book.";
		cout << "\n\t3.Return a Book.";
		cout << "\n\t4.Display All Books.";
		cout << "\n\t5.Exit." << endl;
		
		cout << "\nEnter Your Choice : ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
			{
				cout << "\nEnter the Details of New :- ";
				cout << "\nEnter the Title " << setw(4) << ": ";
				getline(cin,InputBookName);
				getline(cin,InputBookName);	
				cout << "Enter the Author " << setw(3) << ": ";
				getline(cin,InputAuthor);
				//getline(cin,InputAuthor);
				cout << "Enter the ISBN " << setw(5) << ": ";
				cin >> InputISBN;
				
				Books B(InputBookName,InputAuthor,InputISBN,NextBookNumber);
				break;
			}
			case 2:
			{
				vector<string> contents;
				string searchTitle;
				
				cout << "\nEnter the Title of Book : ";
				getline(cin,searchTitle);
				getline(cin,searchTitle);
				
				if(CheckValid(searchTitle) == 1)
				{
					string line;
					string match = "State       : "+searchTitle+" [ Not Issued ]";
					string replace = "State       : "+searchTitle+" [ Issued ]";
					
					ifstream inFile("DataBase.txt",ios::in);
					while(getline(inFile,line))
						contents.push_back(line);
					inFile.close();
					
					for(int i=0 ; i<contents.size() ; i++)
					{
						if(contents[i] == match)
							contents[i] = replace+"\n";
					}
					ofstream outFile("DataBase.txt",ios::trunc);
					outFile.close();
					
					ofstream write("DataBase.txt",ios::app);			
					for(int i=0 ; i<contents.size() ; i++)
					{
						write << contents[i]+"\n";
					}
					write.close();
					
					cout << "\nBook Issued Successfully :) " << endl;
				}
				break;
			}
			case 3:
			{
				vector<string> contents;
				string searchTitle;
				int rating;
				bool found = false;
				
				cout << "\nEnter the Title of Book : ";
				cin.ignore();
				getline(cin,searchTitle);
				
				string line;
				string match = "State       : "+searchTitle+" [ Issued ]";
				string replace = "State       : "+searchTitle+" [ Not Issued ]";
				
				ifstream inFile("DataBase.txt",ios::in);
				while(getline(inFile,line))
					contents.push_back(line);
				inFile.close();
				
				for(int i=0 ; i<contents.size() ; i++)
				{
					if(contents[i] == match)
					{
						contents[i] = replace+"\n";
						found = true;
					}
				}
				if(found == 0)
					cout << "\n---You Cannot Return this Book..!" << endl;
				else
				{
					ofstream outFile("DataBase.txt",ios::trunc);
					outFile.close();
					
					ofstream write("DataBase.txt",ios::app);			
					for(int i=0 ; i<contents.size() ; i++)
					{
						write << contents[i]+"\n";
					}
					write.close();
					
					cout << "\nBook Returned Successfully :) " << endl;
				}	
				break;
			}
			case 4:
			{
				string line;
				ifstream inFile("DataBase.txt");
				while(getline(inFile,line))
				{
					cout << "\t" << line << endl;
				}
				break;
			}
			case 5:
			{
				cout << "\nExiting..." << endl;
				break;
			}
			default:
			{
				cout << "\nEnter a Valid Option..!" << endl;
				break;
			}
		}
	}while(choice!=5);
	
	return 0;
}