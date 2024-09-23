#include<iostream>
using namespace std;
int main()
{
	char alphabet,upper;
	cout << "Enter the Alphabet : ";
	cin >> alphabet;
	switch(alphabet)
	{
		case('A'):
			cout << "\nThis is a Vowel..!";
			break;
		case('E'):
			cout << "\nThis is a Vowel..!";
			break;
		case('I'):
			cout << "\nThis is a Vowel..!";
			break;
		case('O'):
			cout << "\nThis is a Vowel..!";
			break;
		case('U'):
			cout << "\nThis is a Vowel..!";
			break;		
		default:
			cout << "\nThis is a consonant.";
			break;
	}
	return 0;
}
