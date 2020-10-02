#include <stdio.h>
int main(int argc, char const *argv[])
{
	int array[50],so;
	int max,min;

	printf("Nhap so luong: ");
	scanf("%d",&so);
	for (int i = 0; i < so; ++i)
	{
		printf("Nhap so thu %d: \n", i+1);
		scanf("%d",&array[i]);
		if (i==0) {
			max = min = array[i];
		}
		if(min > array[i]) min = array[i];
		if(max < array[i]) max = array[i];
	}
	printf("Max: %d\n",max);
	printf("Min: %d\n",min);
	return 0;
}