#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char a, str[81],*ptr;
	printf("Enter a sentence: \n");
	gets(str);
	printf("Enter character to search for: \n");
	a = getchar();
	ptr = strchr(str,a);
	printf("String starts at address: %u\n", str);
	printf("First occurrence of the character is at address: %u\n", ptr);
	printf("Position of first occurrence (starting from 0) is: %d\n", ptr-str);
	return 0;
}