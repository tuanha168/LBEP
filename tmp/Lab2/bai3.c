#include <stdio.h>
#include <conio.h>

int main (void){
	float so1,so2;
	
	printf("Nhap so num1 = ");
	scanf("%f",&so1);
	printf("Nhap so num2 = ");
	scanf("%f",&so2);

	printf("Tong: %.0f\n",so1+so2);
	printf("Hieu: %.0f\n",so1-so2);
	printf("Tich: %.0f\n",so1*so2);
	printf("Thuong: %f\n",so1/so2);
	getch();
}
