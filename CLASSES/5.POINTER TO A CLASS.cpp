#include<iostream>
using namespace std;

class Base
{
	public:
		int a=10;
		void show()
		{
			cout<<"The value of A : " << a << endl; 
		}
};

int main()
{
	Base *ptr,x;
	
	ptr = &x;
	
	cout << "The value of A : " << ptr->a << endl;
	return 0;
}
