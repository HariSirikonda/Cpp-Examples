#include<iostream>
#include<fstream>

#define outFile write
//#define cout C
using namespace std;

int main()
{
	ofstream outFile("FILE WRITE.txt");	//opens file
	cout << "File Opened\n";
	
	//check if the file is open or not
	if(!outFile){cout << "File cannot be Opened..!" << endl;}
	
	write << "Hello." << endl;
	write << 25;
	cout << "File Written\n";
	
	outFile.close();
	cout << "File closed";
}