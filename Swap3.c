#include<stdio.h>

int swap()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d", &a, &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nThe final value of a is:%d", a);
	printf("\nThe final value of b is:%d", b);
	return 0;
}

int main()
{
	swap();
	return 0;
}