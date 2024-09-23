#include<iostream>
using namespace std;

class Test
{
	public:
		Test(){cout << "Construcctor of Test." << endl;}
		~Test(){cout << "Destructor of Test." << endl;}
};

int main()
{
	Test t1;
	//Constructor Called
	//Destructor called
}