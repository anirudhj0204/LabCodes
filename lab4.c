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
	int n;
	printf("Enter the number to be checked:");
	scanf("%d", &n);

	int rev_n=0, rem, x;
	x=n;
	while(x!=0){
		rem=x%10;
		rev_n=(rev_n*10)+rem;
		x=x/10;
	}
	
	if(n==rev_n){
		printf("%d is a palindrome.", n);
	}else{
		printf("%d is not a palindrome.", n);
	}
}	
 
 
void leap()
{
	int y, y1, y2;
	printf("Enter the year to be checked:");
	scanf("%d", &y);
	if(y%4==0){
		printf("The year %d is a leap year.", y);
	}else{
		printf("The year %d is not a leap year.", y);
	}
	printf("\nEnter the range of years:");
	scanf("%d %d", &y1, &y2);
	printf("\nThe leap years between %d and %d are:", y1, y2);
	for(int i=y1; i<=y2; i++){
		if(i%4==0){
			printf("%d ", i);
		}
	}
}

void integer()
{
	printf("\n1-Check if given number is prime.\n2-Check if given number is a fibonacci number.\n3-Check if given number is a palindrome.");
	int opt;
	printf("\nEnter option:");
	scanf("%d", &opt);
	switch(opt)
	{
		case 1: prime();
		break;
		
		case 2: fibonacci();
		break;
		
		case 3: palindrome();
		break;
	}
}
int vowel()
{
	char ch;
	printf("Enter the character:");
	scanf(" %c", &ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("Entered character is a vowel.");
		break;
		default:
		printf("Entered character is a consonant.");
		break;
	}
	return 0;
}

int swap()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d", &a, &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nThe final value of a is:%d", a);
	printf("\nThe final value of b is:%d", b);
	return 0;
}

int greatest()
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	printf("Enter the value of c:");
	scanf("%d", &c);
	
	int max;
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("\nThe greatest of a,b and c is:%d", max);
	return 0;
}
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

int pattern()
{	
	printf("\n1-Star Pattern\n2-Number Pattern");
	int choice;
	printf("\nEnter your choice:");
	scanf("%d", &choice);
	
	switch(choice){
		case 1: star();
		break;
		case 2: number();
		break;
	}
	return 0;
}

int main()
{	
	int n=1;
	while(n!=0){
	int opt;
	printf("\n\n1-Leap Year\n2-Integer Checking\n3-Greatest of 3 numbers\n4-Swap variables\n5-Checking whether char is vowel or consonant\n6-Patterns");
	printf("\nEnter option:");
	scanf("%d", &opt);
	
	switch(opt)
	{
			case 1: 
			leap();
			break;
			case 2: 
			integer();
			break;
			case 3: greatest();
			break;
			case 4: swap();
			break;
			case 5: vowel();
			break;
			case 6: pattern();
			break;
			default: printf("Invalid Input");
	}
	}
	return 0;
}