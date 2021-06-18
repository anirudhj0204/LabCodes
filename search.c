#include<stdio.h>


void main()
{
	int A[50]={1,2,3,4,5,6,7,8,9,0}, n, x;
	
	printf("Enter the size of the array:");
	scanf("%d", &n);
	
	printf("Enter the number to be searched for:");
	scanf("%d", &x);
	
	for(int i=0; i<n; i++)
	{
		if(A[i]!=x)
			continue;
		
		if(A[i]==x)
		{
			printf("\nThe number %d exists in the array.", x);
		}
	}
}