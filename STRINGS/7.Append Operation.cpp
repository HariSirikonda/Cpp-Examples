#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string name;	//declaring
	cout << "Enter the collage name : ";
	getline(cin, name);

	cout << "Before appending : " << name << endl;
	
	name.append(" Engineering collage");	//Appending the 3 characters xyz at the end of the string.
	
	cout << "After appending the string : " << name;
	
	return 0;
}
