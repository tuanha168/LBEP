#include <stdio.h>

int main(int argc, char const *argv[])
{
	char name[20];

	printf("Enter your name:");
	scanf("%s",name);
	printf("Hi there: %s\n", name);
	return 0;
}