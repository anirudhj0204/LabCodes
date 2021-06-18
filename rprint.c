#include<stdio.h>

int print()
{
	int a=43;
	
	return printf("%d\n", a);
}

int main()
{
	printf("If the entered value of a is returned then printf works in return statement.\n");
	print();
	return printf("Hello World.");
}