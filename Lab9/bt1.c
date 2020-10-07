#include <stdio.h>

void reverse(double *a);
int main(int argc, char const *argv[])
{
	double a[5];
	printf("Nhap 5 so:\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf",&a[i]);
	}
	reverse(a);
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%.1lf\n",a[i]);
	}
	return 0;
}

void reverse(double *a)
{
	double y[5];
	for (int i = 5; i > 0; i--)
	{
		y[5-i] = a[i-1];
	}
	for (int i = 0; i < 5; i++)
	{
		a[i] = y[i];
	}
}