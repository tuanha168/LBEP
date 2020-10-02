#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int number;
	int *ptr;
	int i;
	printf("How many ints would you like store?\n");
	scanf("%d",&number);
	ptr = (int *) malloc (number*sizeof(int));
	if(ptr!=NULL)
	{
		for (int i = 0; i < number; i++)
		{
			*(ptr+i) = i;
		}
		for (int i = number; i > 0; i--)
		{
			printf("%d\n", *(ptr+(i-1)));

		}
		free(ptr);
		return 0;
	}
	else
	{
		printf("Memory allocation failed - not enough memory.\n");
		return 1;
	}
	return 0;
}