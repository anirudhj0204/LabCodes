#include<stdio.h>



void matrix()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}

void same()
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
	
	int x=1;
	
	if(m==M && n==N)
	{
		printf("A and B can be compared.\n");
		
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(A[i][j]!=B[i][j])
				{
					x=0;
					printf("\nBut, A and B cannot be compared.");
					break;
				}
			}
		}
	}
	else
	{
		printf("\nA and B cannot be compared.");
		x=0;
	}
	
	if(x==1)
		printf("\nA and B are identical matrices.");
}


void transpose()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	int T[10][10];
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			T[i][j]=A[j][i];
		}
	}
	
	printf("Transpose matrix of A is :\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", T[i][j]);
		}
		printf("\n");
	}
}


void subtract()
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
	
	int S[10][10];
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			S[i][j]=A[i][j]-B[i][j];
		}
	}
	
	printf("The resulting matrix is:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", S[i][j]);
		}
		printf("\n");
	}
}

void add()
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
	
	int S[10][10];
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			S[i][j]=A[i][j]+B[i][j];
		}
	}
	
	printf("The resulting matrix is:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", S[i][j]);
		}
		printf("\n");
	}


void identity()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	int x=0;
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j && A[i][j]!=1)
			{
				x=-1;
				break;
			}
			else if(i!=j && A[i][j]!=0)
			{
				x=-1;
				break;
			}
		}
	}
	
	if(x==0)
		printf("Matrix A is an Identity matrix.");
	else
		printf("Matrix A is not an Identity matrix.");
}

void triangular()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	if(m==n)
	{
		printf("Matrix has upper and lower triangular matrices that can be printed.\n\n");
		printf("The Lower Triangular Matrix is :\n");
		for(int i=0; i<m; i++)
		{
			printf("\n");
			for(int j=0; j<m; j++)
			{
				if(i>=j)
				{
					printf("%d\t", A[i][j]);
				}
				else
				{
					printf("0");
					printf("\t");
				}
			}
		}
	
		printf("\n\nThe Upper Triangular Matrix is :\n");
		for(int i=0; i<m; i++)
		{
			printf("\n");
			for(int j=0; j<n; j++)
			{
				if(i>j)
					printf("0\t");
				else
					printf("%d\t", A[i][j]);
			}
		}
	}
	
	else
		printf("The given matrix does not have upper have and lower triangular matrices.\n");
}

void sum()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	int x;
	
	for(int i=0; i<m; i++)
	{
		x=0;
		printf("The sume of elements of Row %d = ", i+1);
		for(int j=0; j<n; j++)
		{
			x+=A[i][j];
		}
		printf("%d\n", x);
	}
	
	for(int j=0; j<n; j++)
	{
		x=0;
		printf("The sum of elements of Column %d = ", j+1);
		for(int i=0; i<m; i++)
		{
			x+=A[i][j];
		}
		printf("%d\n", x);
	}
}

void even_odd()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	int o=0, e=0;
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			if((A[i][j]%2)==0)
				e++;
			else
				o++;
			printf("\n");
		}
	}
	
	printf("The number even elements in the matrix A is %d.\nThe number of odd elements in matrix A is %d.", e, o);
}


void boundary()
{
	int m,n;
	printf("Enter the order of the matrix:\n m and n: ");
	scanf("%d %d", &m, &n);
	
	int A[10][10];
	
	printf("Enter the elements of the matrix:\n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &A[i][j]);
			printf("\n");
		}
	}
	
	printf("\nBoundary Matrix :\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0||j==0||i==n-1||j==n-1)
				printf("%d\t", A[i][j]);
			else
				printf("\t");
		}
		printf("\n");
	}
}
