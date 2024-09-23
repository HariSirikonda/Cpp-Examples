//Sub string concatenation of the

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s1 = "Programming";
	string s2 = "";	//declaring an empty string for the result.
	
	s2 = s1.substr(3,5);        //Take elements 3,4,5 from s1 and add it to tje string s2
	cout << s2 << endl;	//print the result
	
	return 0;
}
