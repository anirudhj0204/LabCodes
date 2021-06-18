#include<stdio.h>


int factorial(int n)
{
	int nf=1;
	for(int i=1; i<=n; i++)
	{
		nf=nf*i;
	}
	return nf;
}

float power(float x, int p)
{
	float r=x;
	for(int i=2; i<=p; i++)
	{
		r=r*x;
	}
	return r;
}

void sine()
{
	float x;
	float pi=3.14;
	printf("Ente x in degrees:");
	scanf("%f", &x);
	float r=x*pi/180;
	float sinr=r;
	float nsin=0;
	for(int i=3; i<=15; i+=4)
	{
		nsin+=-power(r, i)/factorial(i);
	}
	float psin=0;
	for(int j=1; j<=13; j+=4)
	{
		psin+=power(r,j)/factorial(j);
	}
	
	sinr=psin+nsin;
	
	printf("The value of sin%f = %0.5f\n", x, sinr);
	
}

void main()
{
	/*int n, nf=1;
	float r=1;
	printf("Enter the number:");
	scanf("%d", &n);
	nf=factorial(n);
	r=power(4,2);
	printf("The power is %f\n", r);
	printf("The factorial of %d is %d\n", n, nf);*/
	
	sine();
}