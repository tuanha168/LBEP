#include <stdio.h>

int main(int argc, char const *argv[])
{
	char name[20];

	puts("Enter your name:");
	gets(name);
	puts("Hi there:");
	puts(name);
	return 0;
}