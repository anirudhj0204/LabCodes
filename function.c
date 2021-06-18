#include<stdio.h>


int rscan(int a)
{
	printf("Value displayed on calling with scanf is %d\n", a);
}

int rprint(int b)
{
	printf("Value displayed on calling with printf is %d\n", b);
}



int main()
{
	int x,y;
	float f;
	
	rscan(scanf("%d %d %f\n", &x, &y, &f));
	//printf("This proves that using scanf() as an argument while calling a function returns the numbers of entries taken.\n\n");
	
	rprint(printf("\n%d %d %f", x, y, f));
	//printf("\nThis shows that using printf() as an argument while calling a function returns the number of characters printed.\n");
	
}