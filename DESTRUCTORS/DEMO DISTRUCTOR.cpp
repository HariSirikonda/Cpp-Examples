#include<iostream>
using namespace std;

class Demo
{
	private:
		int *p;
	public:
		Demo()
		{
			p=new int[10];	//memory allocated
			cout << "Constructor called." << endl;	
		}
		~Demo()
		{
			delete []p;	//memory deleted
			cout << "Destructor called" << endl;
		}
};

int main()
{
	Demo d1;
}