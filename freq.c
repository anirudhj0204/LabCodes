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
	
	int fr[n];
	int visited=-1;
	
	for(int i=0; i<n; i++)
	{
		int count=1;
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j]){
				count++;
				fr[j]=visited;
			}
		}
		if(fr[i]!=visited)
			fr[i]=count;
	}
	
	printf("\n\nElement | Frequency\n");
	 for(int i=0; i<n; i++){    
        if(fr[i]!=visited){    
            printf("    %d    |    %d\n", arr[i], fr[i]);    
        }    
	 }
}