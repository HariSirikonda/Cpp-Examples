//Password encriptor

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char password[50];
	int password_length,number_index,temp,new_password_length;
	printf("Enter the password : ");
	scanf("%s",password);
	password_length = strlen(password);
	new_password_length = password_length+1;
	for(int i=0;i<=password_length;i++)
	{
		if(isdigit(password[i]))
		{
			number_index = i;
			temp = password[i];
			password[i] = '0';
			for(int n=number_index;n<=0;--n)
			{
				password[n+1] = password[n];
			}
			password[0] = temp;
			
		}
	}
	printf("%s",password);
	return 0;
}
