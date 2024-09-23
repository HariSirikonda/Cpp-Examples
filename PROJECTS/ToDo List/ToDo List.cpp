#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<fstream>
#include<vector>
using namespace std;

class Task
{
	private:
		string taskDiscription;
		long TaskNumber;
	public:
		Task(string Td)
		{
			taskDiscription = Td;
			
			ofstream outFile("DataBase.txt",ios::app);
			outFile << taskDiscription << " [Incomplete]" << "\n";
			outFile.close();
			
			cout << "\nTask Added Successfully :) " << endl;
		}
};

int main()
{
	int choice;
	string InputDiscription;
	
	do
	{
		cout << "\n******** Welcome To ToDo List ********\n";
		cout << "\n\t1.Add a New Task.";
		cout << "\n\t2.Mark a task as Done.";
		cout << "\n\t3.Display all Tasks.";
		cout << "\n\t4.Exit.\n";
		
		cout << "\nEnter Your choice : ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
			{
				cout << "Enter the Task Discription : ";
				cin.ignore();
				getline(cin,InputDiscription);
				Task t1(InputDiscription);
				break;
			}
			case 2: 
			{
			    
				string line;
				string TaskDisc;
			    string match;
			    vector<string> lines;
			
			    cout << "\nEnter the Task Description : ";
			    cin.ignore(); // Clear the newline character
			    getline(cin, TaskDisc);
			
			    match = TaskDisc + " [Incomplete]";
			
			    ifstream inFile("DataBase.txt", ios::in);
			    while (getline(inFile, line)) 
				{
			        lines.push_back(line);
			    }
			    inFile.close();
			
			    ofstream outFile("DataBase.txt", ios::trunc);
			
			    for (int i = 0; i < lines.size(); i++) {
			        if (lines[i] == match)
			            lines[i] = TaskDisc + " [Completed]";
			        outFile << lines[i] + "\n";
			    }
			    outFile.close();
			
			    cout << "Task Marked As Done :) \n";
			    break;
			}
			case 3:
			{
				string line;
				int taskNumber = 1;
				cout << "\nDisplaying All the Tasks -- \n\n";
				ifstream inFile("DataBase.txt",ios::in);
				while(getline(inFile,line))
				{
					cout << "\t" << taskNumber << ". " << line << endl;
					taskNumber++;
				}
				inFile.close();
				break;
			}
			case 4:
			{
				cout << "\nExitting..." << endl;
				break;
			}
		}
	}while(choice!=4);
}