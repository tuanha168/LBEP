#include <stdio.h>

int main(){
	int i=0;
	char text;
	printf("Input something: ");
	while((text = getchar()) != '\n'){
		if(text == 'a' || text == 'i' || text == 'u' || text == 'e' || text == 'o'){
		i++;
		}
	}
	printf("Number of vowels: %d",i);
}