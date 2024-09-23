#include<iostream>
using namespace std;

class Innova
{
	public:
		static int price;	//Declaring the static member
		
		static get_price()	//A static member function can access only static data members
		{
			return price;
		}
		
};

//Initialising the static data member
int Innova::price = 2000;

int main()
{
	Innova obj;
	
	cout << "The price of the Innova : " << obj.price << endl;	//We can access the price using Object
	cout << "The price of the Innova : " << Innova::price << endl;	//We can access the price using class name
}