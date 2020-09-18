#include <stdio.h>

int main(void)
{
	int a,b;

	printf("Nhap 2 so a, b: ");
	scanf("%d %d",&a,&b);

	if (a % b == 0)
		printf("a chia het cho b");
	else printf("a hem chia het cho b");
	
}