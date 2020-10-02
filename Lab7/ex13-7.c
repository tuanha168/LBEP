#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int *a,i,n,sum = 0;
	printf("%s%s\n", "An array will be created dynamically. \n\n", "Input an array size n followed by integers: ");
	scanf("%d",&n);
	a = (int *) calloc (n,sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("Enter %d values: \n",n);
		scanf("%d",a + i);
	}
	for (int i = 0; i < n; i++)
	{
		sum+= a[i];
	}
	free(a);
	printf("%s%7d\n%s%7d\n\n", "Number of elements: ",n, "Sum of the elements: ", sum);
	return 0;
}