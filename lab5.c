#include<stdio.h>

int main()
{
	int v=20;
	int *ptr=&v;

	int A[4]={0,1,2,3};
	*ptr=30;
	printf("%d", v);
}