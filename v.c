#include<stdio.h>

int vowel()
{
	char ch;
	printf("Enter the character:");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("\nEntered character is a vowel.");
		break;
		default:
		printf("\nEntered character is a consonant.");
		break;
	}
	return 0;
}

int main()
{
	vowel();
	return 0;
}