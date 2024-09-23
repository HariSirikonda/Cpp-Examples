#include<iostream>
using namespace std;

class Demo
{
	public:
		int x = 10;
		int y = 20;
		void display()	const
		{
			//x++;	//Error
			
			//A constant function cannot perform any increament or decreament operations
			cout << x << endl;
		}			
};
int main()
{
	Demo a;
	a.display();
	
	return 0;
}