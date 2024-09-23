#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string name;
	string surname;
	
	cout << "Enter the last name :";
	getline(cin,name);
	
	cout << "Enter your Surname : ";
	getline(cin,surname);
	
	name.insert(0," ");	//insert a space befor the name.
	name.insert(0,surname);	//insert the surname in the name string.
	cout << "The full name : " << name << endl;
	
	return 0;
}
