#include <stdio.h>

double cong(double a,double b)
{
	return a + b;
}
double tru(double a,double b)
{
	return a - b;
}
double nhan(double a,double b)
{
	return a * b;
}
double chia(double a,double b)
{
	return a / b;
}

int main (void)
{
	double num1,num2;
	
	printf("Enter first number\n");
	scanf("%lf",&num1);
	
	printf("Enter second number\n");
	scanf("%lf",&num2);
	
	printf("%.2lf + %.2lf = %.2lf\n",num1,num2,cong(num1,num2));
	printf("%.2lf - %.2lf = %.2lf\n",num1,num2,tru(num1,num2));
	printf("%.2lf * %.2lf = %.2lf\n",num1,num2,nhan(num1,num2));
	printf("%.2lf / %.2lf = %.2lf\n",num1,num2,chia(num1,num2));
	return 0;
}

