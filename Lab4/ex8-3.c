#include <stdio.h>

int main()
{
	int num1,num2;
	num1 = 77;
	num2 = 90;
	if (num1 == num2)
		printf("\nThe number are equal");
	else if (num1 < num2)
		printf("\nThe greater number is: %d", num2);
	else
		printf("\nThe greater number is: %d", num1);
	
}