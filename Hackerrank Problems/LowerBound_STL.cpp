#include<iostream>
using namespace std;

int search(int A[], int n, int key)
{
    for(int j=0 ; j<n ; j++)
    {
        if(A[j] == key || A[j] > key)
            return j;
    }
    return 0;
}

int main()
{
    int n,q;
    cin >> n;
    int *arr = new int[n];
    int *querries = new int[n];
    for(int i=0 ; i<n ; i++)
        cin >> arr[i];
    cin >> q;
    for(int i=0 ; i<q ; i++)
        cin >> querries[i];
    for(int i=0 ; i<n ; i++)
    {
        int index = search(&arr,n,querries[i]);
        if(index == n || index > n)
        {
            cout << "Yes " << index << endl;
        }
        else
        {
            cout << "No " << index << endl;
        }
    }
    delete arr;
}