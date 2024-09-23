#include<iostream>
using namespace std;

class Base
{
	public:
		void display()	//This is Overridden
		{
			cout << "The display of Base" << endl;
		}
};

class Derived
{
	public:
		void display()
		{
			cout << "The display of Derived" << endl;
		}
};

int main()
{
	Derived d;
	d.display();	//Only the derived class function is called
	return 0;
}	