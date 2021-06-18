#include<stdio.h>

void main()
{
	int arr[50], n, p, x;

	printf("Enter the size of the array:");
	scanf("%d", &n);
	
	printf("Enter the elements of the array:");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nEnter the number to be inserted:");
	scanf("%d", &x);
	
	printf("Specify the position where the number is to be inserted:");
	scanf("%d", &p);
	
	int A[50];
	
	for(int i=0; i<p; i++)
	{
		//for(int j=0; j<p; j++)
		
			A[i]=arr[i];
		
	}
	
	A[p]=x;
	
	for(int i=p+1; i<n+1; i++)
	{
		//for(int j=p+1; j<n+1; j++)
		
			A[i]=arr[i-1];
		
	}
	
	printf("Original array is : ");
	for(int i=0; i<n; i++)
	{
		printf("\t%d", arr[i]);
	}
	
	printf("\nNew array is : ");
	for(int j=0; j<n+1; j++)
	{
		printf("\t%d", A[j]);
	}
}