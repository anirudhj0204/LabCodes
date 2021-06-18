#include<stdio.h>

void main()
{
	int arr[50], n;

	printf("Enter the size of the array:");
	scanf("%d", &n);
	
	printf("Enter the elements of the array:");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int sa[50];
	
	for(int i=0; i<n-2; i++)
		sa[i+2]=arr[i];
	
	for(int i=0; i<2; i++)
		sa[i]=arr[n-i-1];
	
	printf("\nThe original array: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n\nThe rotated array: ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", sa[i]);
	}
}