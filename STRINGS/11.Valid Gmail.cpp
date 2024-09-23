#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string email,mail;
	int at_the_rate;
	cout << "Enter the Email : ";
	getline(cin, email);
	
	at_the_rate = email.find('@');
	mail = email.substr(at_the_rate+1, 9);
	
	if(mail == "gmail.com")
		cout << "This is a Valid Mail..!";
	else
		cout << "This is not a valid mail..!";
	
	
	return 0;
}
