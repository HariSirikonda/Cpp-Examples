#include<iostream>
using namespace std;

class Test
{
	int a;
	int *p;
	
public:
	Test(int x)
	{
		cout << "Object t Created..." << endl;
		a = x;
		cout << "Value of A is assigned with 5" << endl;
		p = new int[a];
		cout << "Dynamic memory allocated in the heap using the pointer..." << endl;
		
	}
	
	Test (Test &t)
	{
		a = t.a;
		cout << "Contents from object t copied to t2..." << endl;
		p = t.p;
		cout << "Now the pointer is pointing towards the already existing dynamic memory..." << endl;
	}
	
	
};

int main()
{
	Test t(5);
	Test t2(t);
	return 0;
}


