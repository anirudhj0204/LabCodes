#include<stdio.h>
void fun()
{
	int a,b;
	char c;
	scanf("%d%d", &a, &b);
	scanf("%c", &c);
}

void main()
{

 fun();
}

// When we need to handle different types of data including character it is better to write scanf for character seperately since there can be unexpected confusions other wise.
// The %c in scanf can only display 1 bit of data. Therefore while enetering in the terminal u must give only one character.