#include<stdio.h>

void main()
{
	int n;
	printf("Enter number of rows:");
	scanf("%d", &n);
	int m=1;
	for(int i=n; i>=1; i--)
	{
		for(int k=1; k<=i-1; k++)
		{
			printf(" ");
		}
		for(int j=1; j<=m; j++)
		{
			printf("*");
		}
			
		printf("\n");
		m++;
		
	}
	
	 /*int n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
	}*/
}