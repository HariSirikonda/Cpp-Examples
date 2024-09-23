#include<iostream>
using namespace std;


enum DAYS{ sunday,monday,tuesday,wednusday,tursday,friday,saturday };

int main()
{
	int number;
	cout << "Enter the number between 1 to 7 : ";
	cin >> number;
	if(0>number<=7){
		DAYS day = static_cast<DAYS>(number-1);
		/*
		In this line, static_cast<Days> is used to explicitly cast the result of the expression (dayNumber - 1) to the enumerated data type Days.
		It tells the compiler to treat the result as a value of type Days.
		This is necessary because enums are distinct types in C++, and explicit casting is needed when converting between them and other integer types.
		*/
		cout << "The day is : " << day << endl;
	}
	else{
		cout << "Invalid input..!";
	}
	return 0;
}

/*

Enums in C++ are primarily used to represent a set of named integer constants.
They provide a way to create symbolic names (like Sunday, Monday, etc.) 
for integral values (0, 1, 2, etc.) to make the code more readable and maintainable.
Enums are not designed to store additional data, like strings, directly.

Symbolic Names: Enums allow you to use meaningful names for integral values.
For example, instead of using 0, 1, 2, etc.,
you can use Sunday, Monday, etc., which makes the code more readable.

Compile-Time Constants: Enum values are compile-time constants, and they are strongly typed.
This means that the compiler enforces type safety, and you can use enums to represent a finite set of values.

Default Incrementing Values: If you don't specify explicit values for enum members,
C++ assigns them incremental values starting from 0.

*/

