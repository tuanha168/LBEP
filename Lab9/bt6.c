#include <stdio.h>
#include <string.h>

void upper_case(char *a);
int main(int argc, char const *argv[])
{
	char a[30];

	printf("Nhap String: \n");
	gets(a);

	upper_case(a);

	printf("In hoa: %s\n",a);
	return 0;
}

void upper_case(char *a)
{
/*	
	int i=0;
	while(1)
	{
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		else if(a[i] == '\0') break;
		i++;
	}
*/
	for (int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
}