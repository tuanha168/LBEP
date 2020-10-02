#include <stdio.h>

int main(int argc, char const *argv[])
{
	static int ary[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	for (int i = 0; i < 10; ++i)
	{
		printf("\ni = %d, ary[i] = %d, *(ary+i) = %d",i,ary[i],*(ary+i));
		printf("\n&ary[i] = %X, ary + i = %X",&ary[i],ary+i);
		printf("\n\n");
	}
	return 0;
}