#include<iostream>
using namespace std;

class add
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout << "Enter a,b : ";
			cin >> a >> b;
		}
		friend int putdata(add s);
};

int putdata(add s)
{
	int c;
	c = s.a+s.b;
	cout << "The addition = " << c << endl;
}

int main()
{
	add x;
	x.getdata();
	putdata(x);
}
