#include<stdio.h>
#include<math.h>
void fibonacci()
{
	int n;
	printf("Enter the number to be checked:");
	scanf("%d", &n);
	int S=5*n*n+4;
	int S1=5*n*n-4;
	float s=sqrt((double)S);
	float s1=sqrt((double)S1);
	int is1=s1;
	int is=s;
	if(is==s){
		printf("\n%d is a fibonacci number.", n);
	}else if(is1==s1){
		printf("\n%d is a fibonacci number.", n);
	}else{
		printf("\n%d is not a fibonacci number.", n);
	}
}
void prime()
{
	int n;
	printf("Enter the number to be checked:");
	scanf("%d", &n);
	for(int i=2; i<n/2; i++)
	{
		if(n%i!=0){
			printf("%d is a prime number.", n);
		}else{
			printf("%d is not a prime number.", n);
		}
		break;
	}
}

void palindrome()
{
	int n, original_n=0;
	printf("Enter the number to be checked:");
	scanf("%d", &n);

	int rev_n=0, rem, x;

	while(n!=0){
		rem=n%10;
		rev_n=(rev_n*10)+rem;
		n=n/10;
	}
	
	if(n==rev_n){
		printf("%d is a palindrome.", n);
	}else{
		printf("%d is not a palindrome.", n);
	}
}	
	
void main()
{	
	palindrome();
}