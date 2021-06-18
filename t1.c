#include<stdio.h>

void main()
{
	int m,n;
	printf("Enter the orders of the matrices A and B:\nm and n: ");
	scanf("%d %d", &m, &n);
	
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
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("B[%d][%d]=", i, j);
			scanf("%d", &B[i][j]);
			printf("\n");
		}
	}
	
	int P[10][10];
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			P[i][j]=0;
			for(int k=0; k<n; k++)
			{
				P[i][j]+=A[i][k]*B[k][j];
			}
			
		}
	}
	
	printf("The resulting matrix is:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", P[i][j]);
		}
		printf("\n");
	}
}