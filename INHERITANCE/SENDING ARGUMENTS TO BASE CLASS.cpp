#include<iostream>
using namespace std;

//base class created
class Base
{
	public:
		Base()	//base constructor
		{
			cout << "Default base..! " << endl;
		}
		Base(int x)	//parameterised base constructor
		{
			cout << "Parameterised Base " << x << endl;
		}
};

class Derived:public Base
{
public:
	Derived()	//default derived constructor
	{
		cout << "Default Derived..! " << endl;
	}
	Derived(int a,int b):Base(a)	//we are calling the parameterised constructor by passing the argument a
	{
		cout << "Parameterised Derived " << b << endl;
	}
};

int main()
{
	Derived d(10,3);
	
	//base constructor called first
	//then after that, derived constructor called
}
