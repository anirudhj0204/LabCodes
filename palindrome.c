#include<stdio.h>

void main()
{
	int n, pal[n];
	scanf("%d", &pal[n]);
	
	
	printf("%d", pal[n]);
	for(int i=0; i<=n-1; i++)
	{
		printf("%d", pal[i]);
		/*for(int j= n-1; j>=0; j--)
		{
			printf("%d %d\n", pal[i], pal[j]);
			if(pal[i]==pal[j]){
				printf("%d is a palindrome.", pal[n]);
			}
			continue;
		}*/
	}
}