#include<iostream>
using namespace std;
int main()
{
	int day;
	cout << "Enter the day number : ";
	cin >> day;
	if((day>0)&&(day<=7))
	{
		if(day==1)
		{
			cout << "\n\tSunday";
		}
		else if(day==2)
		{
			cout << "\n\tMonday";
		}
		else if(day==3)
		{
			cout << "\n\tTuesday";
		}
		else if(day==4)
		{
			cout << "\n\tWednusday";
		}
		else if(day==5)
		{
			cout << "\n\tTursday";
		}
		else if(day==6)
		{
			cout << "\n\tFriday";
		}
		else
		{
			cout << "\n\tSaturday";
		}
	}
	else
	{
		cout << "Enter a valid day..!";
	}
	return 0;
}
