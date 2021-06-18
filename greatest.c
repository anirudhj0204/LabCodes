#include<stdio.h>

int greatest()
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	printf("Enter the value of c:");
	scanf("%d", &c);
	
	int max;
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("\nThe greatest of a,b and c is:%d", max);
	return 0;
}

int main()
{
	greatest();
	return 0;
}