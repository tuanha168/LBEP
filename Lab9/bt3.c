#include <stdio.h>

int songuyento(int a);
int main(int argc, char const *argv[])
{
	int a;
	printf("Nhap 1 so: \n");
	scanf("%d",&a);
	if(songuyento(a) == 1)
	printf("Day la so nguyen to!!");
	else printf("Day khong phai so nguyen to!!");
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