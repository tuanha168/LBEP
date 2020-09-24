#include <stdio.h>
#include <string.h>


int main(){
	int i,n=0;
	int x[40];

	printf("Enter number \n\n");
	printf("Enter 0 when over \n\n");
	while(1){
		fflush(stdin);
		printf("No. %d: ",n+1);
		scanf("%d",&x[n]);
		n++;
		if (x[n] == 0) break;
	}
	n=n-1;
	printf("\nArray reversed: ");
	for(i=n-1;i>=0;--i)
	{
		printf("\nNo. %d is %d",i+1,x[i]);
	}
}