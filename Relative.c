#include<stdio.h>

int main()
{
	int a=1;
	int b=1;
	
	int c=(a!=b);
	printf("%d %d %d", a,b,c);
	int d=24;
	int e=45;
	
	int x=(d<=e);
	printf("\n%d %d %d", d,e,x);
	int y=(a==b);
	printf("\nThis is for the case when a=b: %d", y);
	
	return 0;
}