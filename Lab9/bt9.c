#include <stdio.h>

int main(void){
	double diem[10];
	double tb;
	for (int i = 0; i < 5; i++)
	{
		printf("Diem %d: \n",i+1);
		scanf("%lf",&diem[i]);
	}

	tb = (toan + ly + hoa) / 3;

	printf("GPA : %lf\n",tb);


	if (tb<5) {
		printf("Fake, Thi lai\n");
	}
	else if (tb >= 5 && tb < 6.5){
		printf("Trung binh\n");
	}
	else if (tb >= 6.5 && tb < 8){
		printf("Kha\n");
	}
	else if (tb >= 8){
		printf("Sieu Nhan\n");
	}
}