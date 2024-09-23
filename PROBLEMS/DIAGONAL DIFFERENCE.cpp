#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,principleDiagonal=0,secondaryDiagonal=0;
    scanf("%d",&n);
    int array[n][n];
    
    for(int i=0; i<n ; i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		scanf("%d",&array[i][j]);
		}
	}
    
    for(int i=0; i<n; i++)
    {
        principleDiagonal += array[i][i];
    }
    
    for(int i=0;i<n;i++)
    {
    	for(int j=(n-1);j>=0;j--)
    	{
    		secondaryDiagonal += array[i][j];
    		break;
		}
	}
	
	int diference = secondaryDiagonal - principleDiagonal;
	int absolute_difference = abs(difference);
    
    printf("%d",absolute_difference);
    return 0;
    
}
