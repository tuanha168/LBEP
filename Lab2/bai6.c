#include <stdio.h>

int main(void){
	float toan,ly,hoa;
	float tong,tb;

	printf("Diem Toan: ");
	scanf("%f",&toan);

	printf("Diem Ly: ");
	scanf("%f",&ly);
	
	printf("Diem Hoa: ");
	scanf("%f",&hoa);

	tong = toan + ly + hoa;
	tb = (toan + ly + hoa) / 3;

	printf("Tong : %.1f\nTrung Binh : %.1f",tong,tb);

	getch();
	return 0;
}