#include<stdio.h>

int swap()

{

	char c1='a';
	char c2='b';
	c1=c1+c2;
	c2=c1-c2;
	c1=c1-c2;

	printf(" c1 = %c \nc2 = %c ",c1,c2);

	return 0;

}

int main()
{
	swap();
	return 0;
}