//to check wheather the given number are ascending or not 
#include<stdio.h>
int main()
{
    int a=0,b=0,n,ascending=1;
    //a=previous value
    //b=current value
    //n=size 
    do{
    printf("\nenter the size: ");
    scanf("%d",&n);
    }while(n<0);
    do{
        printf("\n enter the digits=");
        scanf("%d",&b);
        if(b<0)
          printf("\n Given number is not positive");
        else
           if(b<a)
           ascending=0;
           b=a;
           n--;
    }while(n<=0);
    if(ascending==1)
      printf("\n sequence is even ascending ");
    else
      printf("\n sequence is not even ascending ");
    return 0;
}