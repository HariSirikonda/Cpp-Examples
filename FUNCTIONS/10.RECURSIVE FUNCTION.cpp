#include<iostream>
using namespace std;

void fun(int n)
{
	if(n>0)
	{
		cout << n << endl;
		fun(n-1);	//Function calls itself
	}
}

int main()
{
	int x=5;
	fun(x);
}

/*
	Recursive functions are just like loops but more powerful
*/
