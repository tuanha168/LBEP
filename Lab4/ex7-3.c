#include <stdio.h>

int main()
{
	int num, res;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	res = num % 2;
	if(res == 0)
		printf("\nThe number is Even");
	else
		printf("\nThe number is Odd");
}