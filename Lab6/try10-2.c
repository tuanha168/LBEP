#include <stdio.h>


int main()
{
	int i,j,k;
	i = 0;
	printf("Enter no. of rows :");
	scanf("%d",&i);
	for (j = 0; j <= i; j++)
	{
		for (k = 1; k <= j; k++)
			printf("%d",k);
		printf("\n");
	}
}