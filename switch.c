#include<stdio.h>

int circle(){
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

void main()
{
	int n;
	scanf("%d", &n);
	
	switch(n)
	{
		case 12:
		printf("Case 1");
		break;
		
		case 25:
		printf("Case 2");
		break;
		
		case 26:
		circle();
		break;
		
		default:
		printf("No Case");
	}
}