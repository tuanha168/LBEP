#include <stdio.h>

int main()
{
	char c;
	printf("\nPlease enter a character: ");
	scanf("%c",&c);
	if(c >= 'A' && c <= 'Z')
		printf("Lowercase character = %c",c + 'a' - 'A');
	else
		printf("Character Entered is = %c",c);

}