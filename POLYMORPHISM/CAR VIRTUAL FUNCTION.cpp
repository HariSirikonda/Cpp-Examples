#include<iostream>
using namespace std;

class Car
{
	public:
		void start(){cout << "Car Started";}
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
	Car *p = new Innova();	//The pointer is placed in Car so the start function in car is executed
	p->start();
}