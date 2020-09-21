#include <stdio.h>


int main()
{
	int i,j,k;
	i = 0;
	printf("Enter no. of rows :");
	scanf("%d",&i);
	printf("\n");
	for (j = 0; j < i; j++)
		printf("*");
	for (j = 0; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
			printf("+");
		printf("\n");
	}
	for (j = 0; j <= i; j++)
		printf("x");
	printf("\n");

	for (j = i; j > 0; j--)
	{
		for (k = j; k >= 1; k--)
			printf("-");
		printf("\n");
	}
	for (j = 0; j < i; j++)
		printf("*");
	printf("\n");
}