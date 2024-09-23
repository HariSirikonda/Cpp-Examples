#include<iostream>
using namespace std;

//FUNCTION SUM WITH TWO INTEGERS AS PARAMETERS
int sum(int x, int y)
{
    return x+y;
}

//OVERLOADED FUNCTION SUM WITH TWO FLOAT TYPE PARAMETERS
float sum(float x, float y)
{
    return x+y;
}

//OVERLOADED FUNCTION WITH THREE INTEGER TYPE PARAMETERS
int sum(int m, int n, int o)
{
    return m+n+o;
}


void Main()
{
    cout<<sum(10,5);
    cout<<sum(12.9f,8.3f);
    cout<<sum(10,20,30);
}

