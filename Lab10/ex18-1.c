#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i,j;
	char str_arr[5][20],str[20];
	for (int i = 0; i < 5; i++)
	{
		printf("Enter string %d: \n", i+1);
		gets(str_arr[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if(strlen(str_arr[i]) < strlen(str_arr[j]))
			{
				strcpy(str,str_arr[i]);
				strcpy(str_arr[i],str_arr[j]);
				strcpy(str_arr[j],str);
			}
		}
	}
	printf("The strings in descending order of length are: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", str_arr[i]);
	}
	return 0;
}