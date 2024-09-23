#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string name;
	
	cout << "Enter the name : ";
	getline(cin , name);
	cout << "Name before replacing : ";
	name.replace(0,"H");
	cout << "Name after replacing : " << name;
	return 0;
}
