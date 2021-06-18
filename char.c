#include<stdio.h>

void main()
{
	char a,b;
	a='A';
	b='B';
	printf("%c", ++a);
	printf("\n%c", --b);
	a=--b;
	printf("\n%c \n%c", a,b);
}