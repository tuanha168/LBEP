#include <stdio.h>

int main(){
	int vowel=0;
	int cons=0;
	char text;
	printf("Input something: ");
	while((text = getchar()) != '\n'){
		if(text == 'a' || text == 'i' || text == 'u' || text == 'e' || text == 'o'){
		vowel++;
		}
		else cons++;
	}
	printf("Number of vowels: %d\n",vowel);
	printf("Number of consonants: %d\n",cons);
}