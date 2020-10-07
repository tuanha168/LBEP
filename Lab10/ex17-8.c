#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num[5],ctr,sum = 0;
	int sum_arr(int num_arr[]);
	for (int ctr = 0; ctr < 5; ctr++)
	{
		printf("Enter number %d: ", ctr+1);
		scanf("%d", &num[ctr]);
	}
	sum = sum_arr(num);
	printf("The sum of the array is %d\n", sum);
	return 0;
}

int sum_arr(int num_arr[])
{
	int i, total;
	for (i = 0, total = 0; i < 5; i++)
	{
		total += num_arr[i];
	}
	return total;
}