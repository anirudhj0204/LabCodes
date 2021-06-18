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
	
	printf("The distinct elements of the array are: ");
	
	 for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
 
       
        if (i == j)
			printf("%d ", arr[i]);
	}
}