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

int main()
{
	circle();
	return 0;
}


// error: invalid preprocessing directive #inlcude; did you mean #include?
  //  1 | #inlcude<math.h>
    //  |  ^~~~~~~
// It is showing this error for this.