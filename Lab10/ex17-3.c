#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char firstname[15];
	char lastname[15];

	printf("Enter your first name:\n");
	scanf("%s",firstname);
	printf("Enter your last name:\n");
	fflush(stdin);
	scanf("%s",lastname);
	strcat(firstname, lastname);
	printf("%s\n", firstname);

	return 0;
}