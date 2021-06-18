#include<stdio.h>


void main()
{
	int n;
	printf("Enter the size of the array=");
	scanf("%d\n", &n);
	char c[n];
	

	for(int i=0; i<n; i++)
	{
		scanf("%c", &c[i]);
	}
	
	printf("Original array : \n");
	
	
	
	for(int i=0; i<n; i++)
	{
		
		printf("c[%d] = %c\n", i, c[i]);
		
	}
	
	
	//for(int j=n-1; j>=0; j--)
	char revc[n];
		for(int k=0; k<n; k++)
		{
			revc[k]=c[n-1-k];
		}
		
	
	
	printf("\n\nReversed array :\n");
	for(int k=0; k<n; k++)
	{
		printf("c[%d] = %c\n", k, revc[k]);
	}
}