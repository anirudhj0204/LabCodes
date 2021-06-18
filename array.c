#include<stdio.h>
#define MAX 5

void main()
{
	int arr[MAX];
	for(int i=0;i<MAX;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i=0;i<MAX;i++)
		printf("\narr[%d] = %d", i, arr[i]);
}