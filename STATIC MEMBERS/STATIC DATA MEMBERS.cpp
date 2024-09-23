#include<iostream>
using namespace std;

class Test
{
	private:
		int a;
		int b;
	public:
		static int count;	//Declaring the static member
		Test()
		{
			a = 10;
			b = 10;
			count++;
		}
};

//Initialising the static data member
int Test::count = 0;

int main()
{
	Test t1;	
	cout << "count : " << t1.count << endl;
	
	Test t2;
	cout << "count : " << t2.count << endl;
}