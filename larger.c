#include<stdio.h>

void main()
{
	int l[10], n, large, larger;
	printf("Enter the size of the array:");
	scanf("%d", &n);
	
	
	printf("Enter the elements of the array: ");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &l[i]);
	}
	
	larger=l[0];
	
	
	for(int i=0; i<n; i++)
	{
		if(l[i]>larger)
			larger=l[i];
	}
	large = l[0];
	for(int i=1; i<n; i++)
	{
		if(l[i]>large && l[i]<larger)
			large=l[i];
	}
	
	printf("The largest number in the array is %d.\n", larger);
	printf("The second largest number in the array is %d.\n", large);
}
		