#include<stdio.h>

int star()
{
	int m,n;
	printf("Enter number of rows:");
	scanf("%d", &n);
	m=n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m-1; j++)
		{
			printf(" ");
		}
		for(int k=1; k<=2*i-1; k++)
		{
			printf("*");
		}
		m--;
		printf("\n");
	}
	return 0;
}


int number()
{	



	int i,j,k,l,n;    
	  
	printf("Enter the number of rows=");    
	scanf("%d",&n);    
	for(i=1;i<=n;i++)    
	{    
		for(j=1;j<=n-i;j++)    
		{    
			printf(" ");    
		}    
		for(k=1;k<=i;k++)    
		{		    
			printf("%d",k);    
		}    
		for(l=i-1;l>=1;l--)    
		{    
			printf("%d",l);    
		}    
		printf("\n");
	}    
	return 0;
}


int main()
{
	
	int opt;
	scanf("%d", &opt);
	switch(opt){
		case 1:
		star();
		break;
		
		case 2:
		number();
		break;
	}
	return 0;
}