#include<stdio.h>

int velocity()
{
	float u,v,a,t;
	
	printf("Enter initial velocity u= ");
	scanf("%f", &u);
	printf("Enter acceleration a= ");
	scanf("%f", &a);
	printf("Enter time t= ");
	scanf("%f", &t);
	v=u+a*t;
	printf("Final velocity of the moving body is v= %f", v);
	return 0;
}

int distance()
{
	float u,a,t,s;
	printf("\nEnter initial velocity u= ");
	scanf("%f", &u);
	printf("Enter acceleration a= ");
	scanf("%f", &a);
	printf("Enter time t= ");
	scanf("%f", &t);
	s=u*t+1/2*a*t*t;
	printf("The displacement of the moving body is s= %f", s);
	return 0;
}

int main()
{
	velocity();
	distance();
	return 0;
}
