#include <stdio.h>

int main(void){
	int i = 15;
	float f = 3.456;
	double d = 3.4567891235;
	char c = 'E';

	printf("/*======= Kich thuoc cua cac kieu du lieu =======*/\n\n");

	printf("      Kieu int: %d Byte\n",sizeof(int));
	printf("      So nguyen: %d\n\n",i);
	
	printf("      Kieu float: %d Byte\n",sizeof(float));
	printf("      So thuc kieu float: %f\n\n",f);
	
	printf("      Kieu double: %d Byte\n",sizeof(double));
	printf("      So thuc kieu double: %.10lf\n\n",d);

	printf("      Kieu char: %d Byte\n",sizeof(char));
	printf("      Ky tu: %c\n\n",c);

	printf("      Kieu long int: %d Byte\n\n",sizeof(long int));
	printf("      Kieu long double: %d Byte\n\n",sizeof(long double));


	printf("/*===============================================*/\n");
	printf("Bam mot phim bat ky de dong chuong trinh!\n");


	getch();
	return 0;
}