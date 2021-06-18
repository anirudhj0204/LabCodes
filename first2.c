#include<stdio.h>

int add()
{
	int a,b;
	printf("Enter a and b:- \n");
	scanf("%d%d", &a, &b);
	int c=a+b;
	printf("Sum=%d", c);
	return 0;
}

