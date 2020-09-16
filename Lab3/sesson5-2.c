#include <stdio.h>

int main(void){
	float cm,inch,feed;

	printf("Nhap chieu dai (cm) : \n");
	scanf("%f",&cm);

	inch = cm / 2.54;
	feed = inch / 12;

	printf("%f centimeters is %.1f feed\n",cm,feed);
	printf("%f centimeters is %.1f inch\n",cm,inch);
}