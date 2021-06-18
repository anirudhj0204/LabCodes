#include<stdio.h>

int max()
{
	int a,b,c,max;
	printf("Enter a= ");
	scanf("%d", &a);
	printf("Enter b= ");
	scanf("%d", &b);
	printf("Enter c= ");
	scanf("%d", &c);
	
	max=(a > b) ?
          (a > c ? a : c) :
          (b > c ? b : c);
	printf("The greatest among a,b and c is= %d", max);
	return 0;
}

int main()
{
	max();
	return 0;
}