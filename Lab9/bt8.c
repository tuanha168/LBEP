#include <stdio.h>
#include <string.h>

int sokytu(char *a,char kytu);
int main(int argc, char const *argv[])
{
	char str[30],kytu;
	printf("Nhap string:\n");
	gets(str);
	printf("Nhap kytu:\n");
	kytu = getchar();
	printf("co %d ky tu thoa man yeu cau\n", sokytu(str,kytu));
	return 0;
}

int sokytu(char *a,char kytu)
{
	int sum = 0;
	for (int i = 0; a[i] != '\0' ; i++)
	{
		if (a[i] == kytu)
		{
			sum ++;
		}
	}
	return sum;
}