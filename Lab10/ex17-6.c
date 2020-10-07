#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char hotelname1[15] = "Sea View";
	char hotelname2[15] = "Sea Breeze";

	printf("The old name is %s\n", hotelname1);
	strcpy(hotelname1,hotelname2);

	printf("The new name is %s\n", hotelname1);
	return 0;
}