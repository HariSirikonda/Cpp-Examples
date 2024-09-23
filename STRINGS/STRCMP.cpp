#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20] = "Hari";
	char s2[20] = "hari";
	
	//Compares the string s1 and s2.
	cout << strcmp(s1,s2) << endl;
	/*
		1- s1 has an upper case H.
		2- s2 has a lower case h.
		3- The ASSCI code of h is greater than the H.
		4- We specified strcmp(s1,s2)
		5- s1<s2
		6- Therefore the function returns a negative integer i.e -1
		7- Otherwise it will return +1
		8- in case if the strings are equal, it displays 0
	*/
	
	return 0;
}
