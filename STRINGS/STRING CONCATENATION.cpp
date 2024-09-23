//Program to add two strings into the result string

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s1 = "Hari ";
	string s2 = "Kiran";
	string result = "";
	
	result.append(s1);
	result.append(s2);
	
	cout << result << endl;
	
	return 0;
}
