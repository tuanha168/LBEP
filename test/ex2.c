#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num[10];
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("+ Number %d: ", i+1);
		scanf("%d",&num[i]);
		max++;
	}
	printf("Result:");
	for (int i = max-1; i >= 0; i--)
	{
		if (i == 0) printf(" %d\n", num[i]);
		else printf(" %d,", num[i]);
	}

	return 0;
}