#include<stdio.h>

int main()
{
	int a=1;
	int b=-15;
	
	int c=(a&&b);
	int d=!(a&&b);
	int e=(a||b);
	printf("%d %d %d %d", a,b,c,e);
	return 0;
}