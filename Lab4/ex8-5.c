#include <stdio.h>

int main()
{
	int num1,num2,res;
	char op;
	num1 = 90;
	num2 = 33;
	op = '-';
	switch(op)
	{
		case '+':
			res = num1 + num2;
			printf("\nThe Sum is: %d",res);
			break;
		case '-':
			res = num1 - num2;
			printf("\nNumber after Division: %d",res);
			break;
		case '*':
			res = num1 * num2;
			printf("\nNumber after multiplication: %d",res);
			break;
		default:
			printf("\nInvalid");
		break;
	}
}