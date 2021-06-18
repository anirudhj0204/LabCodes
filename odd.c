#include<stdio.h>

void main()
{
	long int a[20], n, e[20], o[20];
	
	printf("Enter the size of the array:");
	scanf("%d", &n);
	
	printf("\nEnter the elements of the array:");
	for(int i=0; i<n; i++)
	{
		scanf("%ld", a[i]);
	}
	int j=0, k=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
		}
		else
		{
			o[k]=a[i];
			k++;
		}
	}
	
	printf("\nThe array of even elements is :");
	for(int i=0; i<j; i++)
	{
		printf("\n%ld", e[i]);
	}
	
	printf("\nThe array of odd elements is :");
	for(int i=0; i<k; i++)
	{
		printf("\n%ld", o[i]);
	}
}