#include <stdio.h>

int main(void){
	double tb;

	printf("Input mark: \n");
	scanf("%lf",&tb);

	if (tb>75) {
		printf("Grade A\n");
	}
	else if (tb > 60 && tb <= 75){
		printf("Grade B\n");
	}
	else if (tb > 45 && tb <= 60){
		printf("Grade C\n");
	}
	else if (tb > 35 && tb <= 45){
		printf("Grade D\n");
	}
	else if (tb <= 35){
		printf("Grade E\n");
	}
}