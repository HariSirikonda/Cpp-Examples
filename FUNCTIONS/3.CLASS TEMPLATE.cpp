#include<iostream>
using namespace std;

/*
template <class T>
T max(T x, T y)	//whenever we use the function template, the return type of that function becomes T
*/
template <class T>
T max(T x, T y)
{
	if(x>y)
	return x;
	
	else
	return y;	
}


int main()
{
	int a=10,b=20;
	
	cout << "The Biggest of x,y is : " << max(a,b) << endl;
	return 0;
}
