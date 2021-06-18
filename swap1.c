#include<stdio.h>

int swap()
{
	char c1,c2;
	printf("Enter c1= ");
	scanf("%c", &c1);
	printf("Enter c2= ");
	scanf("%c", &c2);
	
	c1=c1+c2;
	c2=c1-c2;
	c1=c1-c2;
	
	printf("c1=%c", c1);
	printf("\nc2=%c", c2);
	return 0;
}

int main()
{
	swap();
	return 0;
}
	
