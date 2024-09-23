#include<iostream>
#include<fstream>

#define outFile write
//#define cout C
using namespace std;

class Student
{
	public:
		string name;
		int roll;
		string branch;
		friend ofstream & operator<<(ofstream & ofs, Student &s);
}

ofstream &operator<<(ofstream &ofs, Student &s)
{
	write << name;
	write << roll;
	write << branch;  
}

int main()
{
	Student s1;
	s1.name = "John";
	s1.roll = 25;
	s1.branch = "EEE";
	
	ofstream outFile("SERIALIZATION.txt");	//opens file
	cout << "File Opened\n";
	
	//check if the file is open or not
	if(!outFile){cout << "File cannot be Opened..!" << endl;}
	
	outFile << s1;
	
	outFile.close();
	cout << "File closed";
}