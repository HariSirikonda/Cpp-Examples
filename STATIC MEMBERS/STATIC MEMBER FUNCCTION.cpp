#include<iostream>
using namespace std;

class Test
{
	private:
		int a = 10;
		int b = 10;
	public:
		static int count;	//Declaring the static member
		
		static get_data()	//A static member function can access only static data members
		{
			a++;	//cannot be accessed
			count++;	//can be accessed
		}
		
};

//Initialising the static data member
int Test::count = 20;

int main()
{
	Test t1;	
	cout << "count : " << t1.count << endl;
	
	Test t2;
	cout << "count : " << t2.count << endl;
}