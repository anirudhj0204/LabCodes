#include<stdio.h>

void poly()
{
	int n;
	printf("Enter the number n:");
	scanf("%d", &n);
	int f;
	for(int i=1; i<=n; i++)
	{
		f=i*i*i+i+1;
		printf("f(%d) = %d\n", i, f);
	}
}
void mult()
{
	int n;
	printf("Enter the number n:");
	scanf("%d", &n);
	int m;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=20; j++)
		{
			m=i*j;
			printf("%d*%d=%d\n", i, j, m);
		}
		printf("\n\n");
	}
}

void evenm()
{
	int n;
	printf("Enter the number n:");
	scanf("%d", &n);
	int m, c=0;
	for(int i=1; i<=n; i++)
	{
		c+=2;
		for(int j=1; j<=10; j++)
		{
			m=c*j;
			printf("%d*%d=%d\n", c, j, m);
		}
		printf("\n\n");
	}
}


void main()
{
	int opt;
	printf("Enter the option:");
	scanf("%d", &opt);
	switch(opt)
	{
		case 1:poly();
			break;
		case 2:mult();
		break;
		case 3:evenm();
		break;
	}
}
		