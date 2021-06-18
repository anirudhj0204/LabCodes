#include<stdio.h>
int circle();
int max();
int operation();

int main()
{
	int opt;
	printf("1-Find max of 3 numbers\n2-Find area and circumference of a circle\n3-operate on 2 numbers");
	scanf("%d", &opt);
	switch(opt)
	{
		case 1:
		max();
		break;
	
		case 2:
		circle();
		break;
	
		case 3:
		operation();
		
		break;
	}
	return 0;
}