#include<iostream>
#include<cstring>
#include<cstddef>
#include<fstream>
using namespace std;

int main()
{
	/*string name;
	cout << "Enter the name : ";
	cin >> name;
	
	ofstream outFile("Data.txt",ios::app);
	outFile << name << "\n";
	outFile.close();
	*/
	string contents;
	string line;
	
	ifstream inFile("Data.txt",ios::in);
	while(getline(inFile,line))
		contents += line + "\n";
	inFile.close();
	
	
	cout << "Before Replacement : \n";
	cout << contents;
	
	string searchText = "Krishna";
	int pos = contents.find(searchText);
	contents.replace(pos,searchText.length(),"Ranjith");
	ofstream outFile("Data.txt");
	outFile << contents;
	outFile.close();
	
	cout << "After Replacement : \n";
	cout << contents;
	return 0;
}
