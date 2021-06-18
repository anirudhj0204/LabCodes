#include<stdio.h>

int cuboid()
{
	float l,b,h;
	printf("Enter length of the cuboid l= ");
	scanf("%f", &l);
	printf("\nEnter breadth of the cuboid b= ");
	scanf("%f", &b);
	printf("\nEnter height of the cuboid h= ");
	scanf("%f", &h);
	
	
	
	float V;
	V=l*b*h;
	printf("\nThe volume of the cuboid is V= %f", V);
	return 0;
}

int main()
{
	cuboid();
	return 0;
}