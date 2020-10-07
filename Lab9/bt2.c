#include <stdio.h>

int min(int *a);
int main(int argc, char const *argv[])
{
	int a[10];
	printf("Nhap 10 so:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("No.%d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("so nho nhat o vi tri: %d",min(a));
	return 0;
}

int min(int *a)
{
	int min,vitri;
	for (int i = 0; i < 10; i++)
	{
		if(i == 0)
			min = a[i];
		else if (min > a[i])
		{
			min = a[i];
			vitri = i;
		}
	}
	return vitri + 1;
}