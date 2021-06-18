#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if(n>=90 && n<100)
	{
		printf("Grade= S");
	}
	else if(n>=80 && n<90)
	{
		printf("Grade= A");
	}
	else if(n>=70 && n<80)
	{
		printf("Grade= B");
	}
	else{
		printf("Grade= C");
	}
	return 0;
}