#include<stdio.h>

int scan()
{
	int a;
	printf("Enter the number a:");
	return scanf("%d", &a);
}

int main()
{
	printf("This program will check whether scanf works in return statement or not.\n");
	if(scan()>=0)
	{
		printf("It Works.\n");
	}
	
	return 0;
}