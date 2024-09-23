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
	Test *t1 = new Test();
	//Constructor Called Automatically.
	//But we need to call the Destructor mannually when using a pointer
	
	delete t1;	//Destructor called
}