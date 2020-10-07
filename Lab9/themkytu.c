#include <stdio.h>
#include <string.h>
char *chuoi(char *str);
int main(int argc, char const *argv[])
{
	char a[10];
	printf("Nhap chuoi\n");
	gets(a);
	printf("%s",chuoi(a));
	return 0;
}

char *chuoi(char *str)
{
	char *p;
	p = strchr(str,'\0');
	for (int i = 0; i < 5; i++)
	{
		*(str + (p-str) + i) = '!';	
	}
	return str;
}