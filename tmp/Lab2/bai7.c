#include <stdio.h>

int main(void){
	float bankinh,canh,canhngan,canhdai;

	printf("Nhap ban kinh hinh tron: ");
	scanf("%f",&bankinh);

	printf("Chu vi hinh tron: %f\n",bankinh*2*3.14);
	printf("Dien tich hinh tron: %f\n",bankinh*bankinh*3.14);

	printf("Nhap canh hinh vuong: ");
	scanf("%f",&canh);	
	
	printf("Chu vi hinh vuong: %f\n",canh*4);
	printf("Dien tinh hinh vuong: %f\n",canh*canh);

	printf("Nhap canh ngan hinh chu nhat: ");
	scanf("%f",&canhngan);
	printf("Nhap canh dai hinh chu nhat: ");
	scanf("%f",&canhdai);	
	
	printf("Chu vi hinh chu nhat: %f\n",(canhngan+canhdai)*2);
	printf("Dien tinh hinh chu nhat: %f\n",canhngan*canhdai);

	getch();
	return 0;
}