#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20] = "Programming";
	char s2 = 'm';
	
	cout << strchr(s1,s2) << endl;	//prints the string s1 starting with char s2 form the front.	
	
	return 0;
}


