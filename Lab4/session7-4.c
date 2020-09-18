#include <stdio.h>

int main(void)
{
	int sal;
	char grade;

	printf("Salary: ");
	scanf("%d",&sal);
	printf("Grade: ");
	fflush(stdin);
	scanf("%c",&grade);

	switch (grade)
	{
		case 'A':
			printf("Salary is %d",sal + 300);
			break;
		case 'B':
			printf("Salary is %d",sal + 250);
			break;
		default:
			printf("Salary is %d",sal + 100);
			break;
	}
}