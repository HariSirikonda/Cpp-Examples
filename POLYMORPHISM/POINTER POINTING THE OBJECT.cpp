#include<iostream>
using namespace std;

class Car
{
	public:
		virtual void start(){cout << "Car Started";}	//ADDED VIRTUAL KEYWORD
};
class Innova:public Car
{
	public:
		void start(){cout << "Innova started";}
};
class Swift:public Car
{
	public:
		void start(){cout << "Swift started";}
};

int main()
{
	Car *p = new Innova();	//The pointer is pointing the Innova so the start function in Innova got executed
	p->start();
	
	
}