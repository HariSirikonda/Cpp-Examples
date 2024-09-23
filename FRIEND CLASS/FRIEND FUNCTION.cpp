#include<iostream>
using namespace std;


class Test
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		friend void fun();
};

void fun()
{
	Test t;
	t.a = 10;	//Can be accesable
	t.b = 20;	//Can be accesable
	t.c = 30;	//Can be accesable
	
	cout << "a = " << t.a << endl;
	cout << "b = " << t.b << endl;
	cout << "c = " << t.c << endl;
}

int main()
{
	fun();
	return 0;
}