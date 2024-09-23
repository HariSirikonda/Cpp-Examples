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
};

void fun()
{
	Test t;
	t.a = 10;	//cannot be accesable
	t.b = 20;	//cannot be accesable
	t.c = 30;	//Can be accesable
}

int main()
{
	fun();
	return 0;
}