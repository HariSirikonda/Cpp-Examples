#include<iostream>
using namespace std;

class Primes
{
	int n,fact;
	
	public:
		void getdata()
		{
			cout << "Enter the number : ";
			cin >> n;
		}
		void putdata()
		{
			
			for(int i=1 ; i<=n ; i++)
			{
				fact = 0;
				for(int j=1 ; j<=i ; j++)
				{
					if(i%j == 0)
					fact++;
				}
				
				if(fact == 2)
				cout << "\t" << i;
			}
			
		}
};

int main()
{
	Primes P;
	P.getdata();
	P.putdata();
}
