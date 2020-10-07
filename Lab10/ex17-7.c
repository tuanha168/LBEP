#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char compname[20] = "Microsoft";
	int len, ctr;

	len = strlen(compname);

	for (int ctr = 0; ctr < len; ctr++)
	{
		printf("%c * ", compname[ctr]);
	}
	return 0;
}