#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20] = "Hari kiran";
	char s2[10] = "";
	
	strcpy(s2,s1);	//make a copy from s1 to s2
	
	cout << s2 << endl;
	
	return 0;
}
