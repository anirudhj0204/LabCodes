#include <stdio.h>


void main()
{
	int n;
	printf("Enter the size of the array=");
	scanf("%d\n", &n);
	int alt[n];
	
	for(int i=0; i<n; i++)
	
		scanf("%d", &alt[i]);
	
	printf("The alternate elements of the given array are:");
	for(int i=0; i<n; i+=2)
	
		printf("%d ", alt[i]);      
}