#include <stdio.h>

int main(void)
{
	int a,b;

	printf("Nhap 2 so a, b: ");
	scanf("%d %d",&a,&b);

	if (b - a == a)
		printf("Difference is equal to value %d",a);
	else if (a - b == b)
		printf("Difference is equal to value %d",b);
	else printf("Difference is not equal to any of the values entered");
	
}