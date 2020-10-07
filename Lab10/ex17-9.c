#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char lines[5][20];
	int ctr,longctr=0;
	int longest(char lines_arr[][20]);

	for (int ctr = 0; ctr < 5; ctr++)
	{
		fflush(stdin);
		printf("Enter string %d:\n", ctr+1);
		gets(lines[ctr]);
	}
	longctr = longest(lines);

	printf("The longest string is %s\n",lines[longctr]);
	return 0;
}

int longest(char lines_arr[][20])
{
	int i = 0, l_ctr = 0, prev_len, new_len;
	prev_len = strlen(lines_arr[i]);

	for (i = 0; i < 5; i++)
	{
		new_len = strlen(lines_arr[i]);
		if ( new_len > prev_len )
		{
			l_ctr = i;
			prev_len = new_len;
		}
	}
	return l_ctr;
}