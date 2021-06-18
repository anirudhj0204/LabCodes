#include<stdio.h>

void main()
{
	int n, n1=0, rev_n, rem;
	printf("Enter a number:");
	scanf("%d", &n);
	n1=n;
	while(n!=0){
	rem=n%10;
	rev_n=(rev_n*10)+rem;
	n=n/10;
	}
	
	printf("Reverse of %d=%d", n1, rev_n);
	
}