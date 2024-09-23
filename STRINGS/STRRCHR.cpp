#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20] = "Programming";
	char s2 = 'm';
	
	//prints the string s1 staring the char s2 from the reverse order.
	cout << strrchr(s1, s2) << endl;
	
	return 0;
}
