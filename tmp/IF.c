#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int r;
	
	printf("Input integer\n");
	scanf("%d",&r);
	
	if(r%2==0) 
		printf("So chan\n");
	else
		printf("So le\n");
	
	return 0;
}
