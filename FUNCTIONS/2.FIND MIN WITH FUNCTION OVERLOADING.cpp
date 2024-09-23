#include<iostream>
using namespace std;

//FUNCTION MIN WITH TWO INTEGER TYPE PARAMETERS
int Min(int m, int n)
{
    if(m<n)
        return m;
    else
        return n;
}

//OVERLOADED FUNCTION OF THREE INTEGERS AS PARAMETERS
int Min(int x, int y, int z)
{
    if(x<y && x<z)
        return x;
    else if(y<z)
        return y;
    else
        return z;
}

//OVERLOADED FUNCTION OF FLOAT TYPE
float Min(float m, float n)
{
    if(m<n)
        return m;
    else
        return n;
}

void Main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
}

