#include <stdio.h>

void cong(double a,double b);
void tru(double a,double b);
void nhan(double a,double b);
void chia(double a,double b);

int main (void)
{
	double num1,num2;
	int chose;
	char n;
	num1 = num2 = 1;
	while(1)
	{
		printf("\nCalculation:\n");
		printf("===============\n");
		printf("1.\tInput Number\n");
		printf("2.\tCaculated Sum\n");
		printf("3.\tCaculated Substraction\n");
		printf("4.\tCaculated Multiplication\n");
		printf("5.\tCaculated Division\n");
		printf("6.\tExit\n\n");

		scanf("%d",&chose);
		switch(chose)
		{
			case 1:
				printf("Enter first number\n");
				scanf("%lf",&num1);
				printf("Enter second number\n");
				scanf("%lf",&num2);
				break;
			case 2:
				cong(num1,num2);
				break;
			case 3:
				tru(num1,num2);
				break;
			case 4:
				nhan(num1,num2);
				break;
			case 5:
				chia(num1,num2);
				break;
			case 6:
				return 0;
			default:
				printf("Wrong input\n");
				return 0;
		}
		printf("\nDo you want to continue? (Y/N)\n");
		fflush(stdin);
		scanf("%c",&n);
		switch(n)
		{
			case 'y':
			case 'Y':
				break;
			case 'n':
			case 'N':
				return 0;
			default:
				printf("Wrong input\n");
				return 0;
		}
	}
	return 0;
}

void cong(double a,double b)
{
	printf("Sum: %.2lf\n",a,b,a+b);
}
void tru(double a,double b)
{
	printf("Substraction: %.2lf\n",a,b,a-b);
}
void nhan(double a,double b)
{
	printf("Multiplication: %.2lf\n",a,b,a*b);
}
void chia(double a,double b)
{
	printf("Division: %.2lf\n",a,b,a/b);
}
