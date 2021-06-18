#include<stdio.h>

void main()
{
	6>7?printf("Hello World"):printf("Bye world");
	
	int c;
	c>0?printf("\nPositive"):printf("\nNegative");
	c>=0?printf("\nPositive"):printf("\nNegative");
	c=14/2*8%5*2;
	printf("\n%d", c);
}