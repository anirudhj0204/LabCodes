#include <stdio.h>
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
int divd()
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
};
int main()
{
    add();
    sub();
    mult();
    divd();
    mod();
    return 0;
}