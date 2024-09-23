#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void fun(){
			cout << "Base Class Function" << endl;
		}
};

class Derived:public Base
{
	public:
		void fun(){
			cout << "Derived Class Function" << endl;
		}
};

int main()
{
	Derived d;
	Base *p = new Derived();
	p->fun();	//Derived class functin is called instead of base class
	
	return 0;
	
}