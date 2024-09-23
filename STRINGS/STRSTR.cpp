#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20] = "Programming";
	char s2[10] = "g";
	
	cout << strstr(s1,s2) << endl;	//prints the string s1 starting with the char g that is s2.
	
	return 0;
}
