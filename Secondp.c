#include<stdio.h>

int main()

{

	char *s = "Mahipal";
	char *t = "Atturi";

	s = s + (s-t);
	printf("%d", &s);

	t = s - (s-t)/2;

	s= s - (s-t)*2;

	printf(" s = %s t = %s ",s,t);

	return 0;

}