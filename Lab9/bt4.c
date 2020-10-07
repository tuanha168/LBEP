#include <stdio.h>
#include <stdlib.h>

int range;

int songuyento(int a);
int main(int argc, char const *argv[])
{
	int *a;
	printf("Nhap so phan tu: \n");
	scanf("%d",&range);
	a = (int*)malloc(range*sizeof(int));
	for (int i = 0; i < range; i++)
	{
		printf("No.%d: \n", i+1);
		scanf("%d",&a[i]);
	}
	printf("So nguyen to:");
	for (int i = 0; i < range; i++)
	{
		if(songuyento(a[i]) == 1)
		printf(" %d", a[i]);
	}
	return 0;
}

int songuyento(int a)
{
	for (int i = 2; i < a; i++)
	{
		if(a % i == 0) return 0;
	}
	return 1;
}