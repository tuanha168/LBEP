#include <stdio.h>
#include <conio.h>

int main (void){
	float top,bottom,height;
	
	printf("Nhap Day nho = ");
	scanf("%f",&top);
	
	printf("Nhap Day lon = ");
	scanf("%f",&bottom);
	
	printf("Nhap chieu cao = ");
	scanf("%f",&height);
	
	printf("Dien Tich: %f\n",(top+bottom)/2*height);
	getch();
}
