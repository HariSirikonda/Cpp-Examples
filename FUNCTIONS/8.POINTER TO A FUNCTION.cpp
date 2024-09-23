#include<iostream>
using namespace std;

//Function to find minimum
int min(int x, int y)
{
	int result = x<y?x:y;
	cout << result << endl;
}

//Function to find MAximum
int max(int x, int y)
{
	int result = x>y?x:y;
	cout << result << endl;	
}

int main()
{
	int (*fp)(int,int);	//Pointer to the function
	
	//The pointer is pointing to Min
	fp = min;
	(*fp)(10,5);	//Min is called
	
	//Pointer is pointing to Max
	fp = max;
	(*fp)(10,5);	//Max is called
	return 0;
}

