#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void fun1()	//Overridden
		{
			cout << "Fun 1 of Base class" << endl;
		}
		virtual void fun2() = 0; //Abstract class
};

class Derived:public Base
{
	public:
		void fun1()
		{
			cout << "Fun 1 of Derived class" << endl;
		}
		void fun2()
		{
			cout << "Fun 2 of Derived class" << endl;
		}		
};

int main()
{
	Derived d;
	d.fun1();
	d.fun2();
}