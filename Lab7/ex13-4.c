#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int *p,n,i,j,temp;
	printf("Enter numbar of elements in the array: \n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("Enter element no. %d: \n", i+1);
		scanf("%d",p+i);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", *(p+i));
	}
	return 0;
}