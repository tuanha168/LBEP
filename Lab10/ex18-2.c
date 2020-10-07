#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	char names[5][20];
	void uppername(char name_arr[]);
	for (int i = 0; i < 5; i++)
	{
		printf("Enter string %d: ", i+1);
		gets(names[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		uppername(names[i]);
		printf("New string %d: %s\n", i+1, names[i]);
	} 
	return 0;
}

void uppername(char name_arr[])
{
	int x;
	for (int x = 0; name_arr[x] != '\0'; x++)
	{
		if (name_arr[x] >= 97 && name_arr[x] <= 122)
			name_arr[x] = name_arr[x]-32;
	}
}