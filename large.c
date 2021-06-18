#include<stdio.h>


int main()
{
	int n, a[50];
	printf("Enter the size of array:");
	scanf("%d", &n);
	
	printf("\nEnter the array elements:");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	
	int largest, smallest;
	largest=smallest=a[0];
	
	for(int i=1; i<n; ++i)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}
		if(a[i]<smallest)
		{
			smallest=a[i];
		}
	}
	
	printf("The largest element is %d\n",  largest);
	printf("The smallest element is %d\n", smallest);
	return 0;
}