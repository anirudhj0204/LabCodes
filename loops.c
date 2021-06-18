#include<stdio.h>

int natural()
{
	int n;
	printf("Enter the limit number:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		printf("\n%d", i);
	}
	return 0;
}

int even()
{
	int n;
	printf("Enter number limit:");
	scanf("%d", &n);
	for(int i=2; i<=n; i=i+2)
	{
		printf("%d\t", i);
	}
	return 0;
}

int four()
{
	int n;
	printf("Enter number limit:");
	scanf("%d", &n);
	for(int i=4; i<=n; i++)
	{
		if(i%4==0){
			printf("%d\n", i);
		}
	}
	return 0;
}
	
int sbf()
{
	int n;
	printf("Enter number limit:");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		if(i%6==0&&i%5!=0){
			printf("%d\n", i);
		}
	}
	return 0;
}
void avg()
{
	int n,ct=1;
	printf("Enter the maximum number of elements:");
	scanf("%d", &n);
	float sum=0, avg, x;
	for(;ct<=n; ct++)
	{
		printf("Enter the %d number=", ct);
		scanf("%f", &x);
		sum=sum+x;
	}
	avg=sum/n;
	printf("\nThe average of given numbers is=%f", avg);
}

void fibonacci()
{
	int n, f1=0, f2=1, f=f1+f2;
	printf("Enter number limit:");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++)
	{	
		printf("%d\t", f);
		f1=f2; 
		f2=f; 
		f=f1+f2;
	}
}

void prime()
{
	int n;
	printf("Enter number limit:");
	scanf("%d", &n);

	for(int i=2; i<=n; i++){
		
		if(i==2||i==3||i==5||i==7)
		{
			printf("\n%d\n", i);
		}
		else{
			if(i%2!=0&&i%3!=0&&i%4!=0&&i%5!=0&&i%6!=0&&i%7!=0&&i%8!=0&&i%9!=0){
				printf("\n\n%d\n", i);
			}
			
		}
	}
}

void prime1()
{
	int n,i = 3, count, c;

    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
}
	
	
int main()
{
	int x;
	scanf("%d", &x);
	
	switch(x)
	{
		case 1: natural();
		break;
		
		case 2:
		even();
		break;
		
		case 3: four();
		break;
		
		case 4: sbf();
		break;
		
		case 5: avg();
		break;
		
		case 6: fibonacci();
		break;
		
		case 7: prime();
		break;
		
		case 8: prime1();
		break;
	}
	return 0;
}