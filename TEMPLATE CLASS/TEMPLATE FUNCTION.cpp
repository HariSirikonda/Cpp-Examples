#include<iostream>
using namespace std;

//Template class for any monotype operation 
template<class T>
T add(T x, T y)
{
	return x+y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c;
	
	c = add(a,b);
	cout << "Addition : " << c << endl;
	return 0;
}