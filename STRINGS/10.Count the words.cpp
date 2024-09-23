#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int words=1;
	string str;
	cout << "Enter the sentence : ";
	getline(cin,str);
	
	for(int i=0 ; str[i] != '\0' ; i++)
	{
		if(str[i] == ' ')
		{
			words++;
		}
	}
	
	cout << "There are " << words << " words"<< endl;
	
	return 0;
}
