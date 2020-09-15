#include <stdio.h>

int main(void){
	int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;

	iResult = a - b - c - d;
	printf("iResult1 = a - b - c - d = %d\n",iResult);

	iResult = a - b + c - d;
	printf("iResult2 = a - b + c - d = %d\n",iResult);

	iResult = a + b / c / d;
	printf("iResult3 = a + b / c / d = %d\n",iResult);

	iResult = a + b / c * d;
	printf("iResult4 = a + b / c * d = %d\n",iResult);

	iResult = a / b * c * d;
	printf("iResult5 = a / b * c * d = %d\n",iResult);

	iResult = a % b / c * d;
	printf("iResult6 = a %% b / c * d = %d\n",iResult);

	iResult = a % b % c % d;
	printf("iResult7 = a %% b / c * d = %d\n",iResult);

	iResult = a - (b - c) - d;
	printf("iResult8 = a - (b - c) - d = %d\n",iResult);

	iResult = (a - (b - c)) - d;
	printf("iResult9 = (a - (b - c)) - d = %d\n",iResult);

	iResult = a - ((b - c) - d);
	printf("iResult10 = a - ((b - c) - d) = %d\n",iResult);

	iResult = a % (b % c) * d * e;
	printf("iResult11 = a %% (b %% c) * d * e = %d\n",iResult);

	iResult = a + (b - c) * d - e;
	printf("iResult12 = a + (b - c) * d - e = %d\n",iResult);

	iResult = (a + b) * c + d * e;
	printf("iResult13 = (a + b) * c + d * e = %d\n",iResult);

	iResult = (a + b) * (c / d) % e;
	printf("iResult14 = (a + b) * (c / d) %% e = %d\n",iResult);


}