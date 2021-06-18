#include<stdio.h>

int circle()
{
	float pi=3.14;
	float r;
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);
	
	float P,A;
	P=2*pi*r;
	A=pi*r*r;
	printf("The circumference of the circle is: %f", P);
	printf("\n The area of the circle is: %f", A);
	return 0;
	
}

int max()
{
	int a,b,c,max;
	printf("Enter a= ");
	scanf("%d", &a);
	printf("Enter b= ");
	scanf("%d", &b);
	printf("Enter c= ");
	scanf("%d", &c);
	
	max=(a > b) ?
          (a > c ? a : c) :
          (b > c ? b : c);
	printf("The greatest among a,b and c is= %d", max);
	return 0;
}


int swap()

{

	char c1='a';
	char c2='b';
	c1=c1+c2;
	c2=c1-c2;
	c1=c1-c2;

	printf(" c1 = %c \nc2 = %c ",c1,c2);

	return 0;

}


int add()
{
    int a, b;
    printf("Enter a & b= \n");
    scanf("%d%d", &a, &b);
    int c=a+b;
    printf("Sum= %d", c);
};
int sub()
{
    int a, b; 
    printf("\nEnter a & b = ");
    scanf("%d%d", &a, &b);
    int c=a-b;
    printf("Difference= %d", c);
};
int mult()
{
    int a, b;
    printf("\nEnter a & b = ");
    scanf("%d%d", &a, &b);
    int c=a*b;
    printf("Product= %d", c);
};
int div()
{
    float a, b;
    printf("\nEnter a & b = ");
    scanf("%f%f", &a, &b);
    int c=a/b;
    printf("Quotient :%f", a / b);
};
int mod()
{
    int a, b;
    printf("\nEnter a & b = ");
    scanf("%d%d", &a, &b);
    int c=a%b;
    printf("Remainder =%d", a % b);
}

int operation()
{
	int op;
	printf("\n1- Addition of given numbers\n2- Subtract given numbers\n3- Divide given numbers\n4- Multiply given numbers\n5- Find remainder on division of given numbers");
	scanf("\n%d", &op);
	switch(op)
	{
		case 1:
		add();
		break;
	
		case 2:
		sub();
		break;
	
		case 3:
		div();
		break;
	
		case 4:
		mult();
		break;
	
		case 5:
		mod();
		break;
	}
	return 0;
}


