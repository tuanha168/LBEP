#include <stdio.h>

int main(void){
	int s, m=3, n=5, r;
	float x=3.0, y,t;

	t = n/m;
	printf("t = n/m = %f\n",t);

	r = n%m;
	printf("r = n%m = %d\n",r);
	
	y = (float)n/(float)m;
	printf("y = n/m = %f\n",y);
	
	t = x*y-(float)m/2;
	printf("t = x*y-m/2 = %f\n",t);
	
	printf("x = x*2.0 = %f\n",x*2);
	
	s = (m+n)/r;
	printf("s = (m+n)/r = %d\n",s);
	
	y = --n;
	printf("y = --n = %f\n",y);

}
