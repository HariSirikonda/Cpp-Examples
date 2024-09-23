#include<iostream>
using namespace std;

class Your;	//declaring class

class My
{
	private:
		int a=10;
	public:
		friend Your;	//friend class
};

class Your
{
	public:
		My m;
		void fun(){cout << m.a << endl;}	//can be accesable
};

int main()
{
	Your y;
	y.fun();
	return 0;
}