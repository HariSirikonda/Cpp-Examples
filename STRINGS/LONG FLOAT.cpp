#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[10] = "237";	//this is a string
	char s2[10] = "53.78";	//This is a string
	
	long int num1 = strtol(s1);	//converted to long
	float num2 = strtof(s2);	//converted to float
	
	cout << num1 << num2 << endl;
	return 0;
}
