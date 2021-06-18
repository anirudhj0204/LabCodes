#include<stdio.h>

void main()
{
	int i=1,  n, counter=2;
	printf("Enter the number n:");
	scanf("%d", &n);
	
	while(i<=n)
	{
		printf("%d  ", counter);
		counter+=2;
		i++;
	}
}