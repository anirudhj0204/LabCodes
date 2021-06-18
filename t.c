#include<stdio.h>
#include<stdlib.h>

void main()
{
	int m,n,M,N;
	printf("Enter the orders of the matrices A and B:\nm and n: ");
	scanf("%d %d", &m, &n);
	printf("M and N: ");
	scanf("%d %d", &M, &N);
	
	int A[10][10];
	int B[10][10];
	printf("Enter the elements of the first matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	printf("Enter the elements of the second matrix:\n");
	
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			printf("B[%d][%d]=", i, j);
			scanf("%d", &B[i][j]);
			printf("\n");
		}
	}
	
	int P[10][10];
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			P[i][j]=0;
		}
	}
	
	
	if(n==M)
	{
		printf("The matrices A and B can be multiplied.\n");
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				for(int k=0; k<N; k++)
				{
					P[i][k]+=A[i][j]*B[j][k];	
				}
				
			}
		}
		printf("The product of the 2 matrices is:\n");
	}
	
	else
		printf("\nThe matrices A and B cannot be multiplied.");

	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<N; j++)
		{
			printf("%d ", P[i][j]);
		}
		printf("\n");
	}

}