#include <stdio.h>

int main(){
	int num;
	printf("\nThe even numbers from 1 to 30 are \n");
	for (num = 2; num <= 30; num += 2)
		printf("%d\n",num);
}