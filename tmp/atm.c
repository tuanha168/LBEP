#include <stdio.h>

int main ()
{
	int id,pin,tmp;
	int t500 = 0,t200 = 10,t100 = 10;
	int r500 = 0,r200 = 0,r100 = 0;
	int tien,tien_tmp,sd = 50000000;
	char chose;

	printf("Moi nhap ID card: ");
	scanf("%d",&id);
	if(id == 1234)
	{
		printf("Moi nhap ma pin: ");
		scanf("%d",&pin);
		if(pin == 1)
		{
			printf("Moi lua chon\n1: Rut tien\n2: In so du\n3: Thoat\n");
			fflush(stdin);
			scanf("%c",&chose);
			switch(chose)
			{
				case '1':
					printf("Moi nhap so tien can rut: ");
					scanf("%d",&tien);
					tien_tmp = tien;

								printf("%d",tien_tmp / 500000);
					if(tien <= sd && tien >= 100000 && tien % 100000 == 0){
						if(tien_tmp >= 500000 && t500 >= 1)
							if (t500 >= tien_tmp / 500000)
							{
								tmp = (tien_tmp / 500000);
								r500 += tmp;
								tien_tmp -= tmp*500000;
							}
							else 
							{
								tmp = (tien_tmp / 500000) - t500;
								tmp = (tien_tmp / 500000) - tmp;
								r500 += tmp;
								tien_tmp -= tmp*500000;
							}
						if(tien_tmp >= 200000 && t200 >= 1)
							if(t200 >= tien_tmp / 200000)
							{
								tmp = tien_tmp / 200000;
								r200 += tmp;
								tien_tmp -= tmp*200000;	
							}
							else 
							{
								tmp = (tien_tmp / 200000) - t200;
								tmp = (tien_tmp / 200000) - tmp;
								r200 += tmp;
								tien_tmp -= tmp*200000;
							}
						if(tien_tmp >= 100000 && t200 >= tien_tmp / 100000)
							{	
								tmp = tien_tmp / 100000;
								r100 += tmp;	
							}
						printf("Da rut %d vnd\n%d to 500k\n%d to 200k\n%d to 100k\n",tien,r500,r200,r100);
					}
					else printf("Nhap sai so tien, thoat chuong trinh\n");
					break;
				case '2':
					printf("Tai khoan cua ban con 50 trieu vnd\n");
					break;
				case '3':
					printf("Thoat chuong trinh\n");
					break;
				default:
					printf("Nhap sai, thoat chuong trinh\n");
			}
		}
		else printf("Sai ma pin\n");
	}
	else printf("Sai ID card\n");

	printf("Xin cam on");

}