#inlcude<stdio.h>

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

#inlcude<stdio.h>

int swap()
{
	char c1,c2;
	printf("Enter c1= ");
	scanf("%c", &c1);
	printf("Enter c2= ");
	scanf("%c", &c2);
	
	c1=c1+c2;
	c2=c1-c2;
	c1=c1-c2;
	
	printf("c1=%c", c1);
	printf("\nc2=%c", c2);
	return 0;
}
	

int main()
{
	circle();
	cuboid();
	velocity();
	distance();
	max();
	swap();
	
	return 0;
}
	