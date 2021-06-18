#include<stdio.h>

int main()
{
	int resis, current;
	
	scanf("%d %d", &resis, &current);// if & is not placed before the variable name in scanf then it will give a runtime error
	int volt=resis*current;
	printf("%d", volt);
	return 0;
}