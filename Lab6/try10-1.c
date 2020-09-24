#include <stdio.h>

int main(){
	int age,i;
	char name[40];

	printf("name: ");
	gets(name);
	printf("age: ");
	scanf("%d",&age);
	for (i=0;i<age;i++)
	{
		printf("%d: %s\n",i+1,name);
	}
}