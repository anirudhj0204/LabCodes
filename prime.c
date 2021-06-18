#include<stdio.h>

void main()
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