#include<iostream>
using namespace std;

//Template class for any multitype operation 
template<class T, class R>
void add(T x, R y)
{
	cout << x+y;
}

int main()
{
	add(10,12.15);
	return 0;
}