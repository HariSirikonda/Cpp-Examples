#include<iostream>
using namespace std;

void fun()
{
	static int v=0;	//Declaring a static variable
	int a=5;
	v++;	//Increamenting
	cout << a << " " << v << endl;
	
}	//The increamented value will remain unchanged even after function Termination.

int main()
{
	fun();
	fun();
	fun();
}
