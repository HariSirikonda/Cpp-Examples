#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		//constructor
		Rectangle()
		{
			length = 1;
			breadth = 1;
		}
		
		void get_data()
		{
			cout << "The length : " << length << endl;
			cout << "The breadth : " << breadth << endl;
		}
		
		void put_data(int l, int b)
		{
			length = l;
			breadth = b;
		}
		
};

int main()
{
	Rectangle r1;	//consructor called
	cout << "Constructor called..." << endl;
	r1.get_data();
	cout << endl;

	r1.put_data(10,5);
	cout << "After setting the values..." << endl;
	r1.get_data();
	cout << endl;
}
