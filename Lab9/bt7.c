#include <stdio.h>

int tong();
int main(int argc, char const *argv[])
{
	printf("Tong cac so nguyen >300, <500 va chia het cho 7: %d",tong());
	return 0;
}

int tong()
{
	int sum;
	for (int i = 301; i < 500; i++)
	{
		if (i%7==0)
			sum+=i;
	}
	return sum;
}