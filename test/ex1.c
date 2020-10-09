#include <stdio.h>

void cong(double a,double b)
{
	printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);
}
void tru(double a,double b)
{
	printf("%.2lf - %.2lf = %.2lf\n",a,b,a-b);
}
void nhan(double a,double b)
{
	printf("%.2lf * %.2lf = %.2lf\n",a,b,a*b);
}
void chia(double a,double b)
{
	printf("%.2lf / %.2lf = %.2lf\n",a,b,a/b);
}

int main (void)
{
	double num1,num2;
	char c;

	printf("Enter first number\n");
	scanf("%lf",&num1);
	
	printf("Enter second number\n");
	scanf("%lf",&num2);
	
	printf("Chose 1:\n+\tto caculate Sum.\n-\tto caculate Substraction.\n*\tto caculate Multiplication.\n/\tto caculate Division.\n\nCaculate : ");
	fflush(stdin);
	scanf("%c",&c);
	
	switch(c)
	{
		case '+':
			cong(num1,num2);
			break;
		case '-':
			tru(num1,num2);
			break;
		case '*':
			nhan(num1,num2);
			break;
		case '/':
			chia(num1,num2);
			break;
		default:
			printf("Wrong input\n");
			break;
	}

	return 0;
}