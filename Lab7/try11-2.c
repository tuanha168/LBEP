#include <stdio.h>

int main(){
	int vow=0,cons=0,i=0;
	char tmp,str[100];
	printf("Input something: ");
	while((tmp = getchar()) != '\n'){
		if(	tmp == 'a' || 
			tmp == 'i' || 
			tmp == 'u' || 
			tmp == 'e' || 
			tmp == 'o' || 
			tmp == 'A' || 
			tmp == 'I' || 
			tmp == 'U' || 
			tmp == 'E' || 
			tmp == 'O')
		{
		vow++;
		}
		else if(tmp != ' ') cons++;
		str[i] = tmp;
		i++;
	}
	str[i] = '\0';
	printf("\nNumber of vowels: %d\n",vow);
	printf("Number of Cons: %d\n",cons);
	printf("String: %s\n",str);
}