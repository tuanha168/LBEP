#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double heron(a,b,c)
double a,b,c;
{
	double s,p;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

int main(int argc, char const *argv[])
{
	double a, b, c;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	if (a + b <= c || a + c <= b || b + c <= a) 
	{
		printf("khong phai tam giac");
		return 0;
	}

	printf("Dien tich: %lf",heron(a,b,c));
	return 0;
}