#include <stdio.h>

int main(void)
{
	int a,b;

	printf("Nhap 2 so a, b: ");
	scanf("%d %d",&a,&b);

	if (a * b >= 1000)
		printf("a * b >= 1000");
	else printf("a * b < 1000");
	
}