#include <stdio.h>


int main()
{
	int num;

	labell:
		printf("\nEnter a number (1): ");
		scanf("%d",&num);
		if(num == 1)
			goto Test;
		else
			goto labell;
	Test:
		printf("All done...");
		
}