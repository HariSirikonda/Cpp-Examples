#include<iostream>
#include<fstream>

#define outFile write
#define inFile read
//#define cout C
using namespace std;

int main()
{
	ifstream inFile("FILE WRITE.txt");	//opens file
	cout << "File Opened\n";
	
	//check if the file is open or not
	if(!outFile){cout << "File cannot be Opened..!" << endl;}
	
	//Variables to store the values
	string str;
	int x;
	
	read >> str;
	read >>x;
	
	cout << str << endl;
	cout << x << endl;
	
	inFile.close();
	cout << "File closed";
}