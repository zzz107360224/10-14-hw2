#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	float a,b,c,d,e,f,g;
	int num;
	printf("請輸入每周固定薪水:");
	scanf_s("%f", &a);
	printf("請輸入上班時數(小時):");
	scanf_s("%f", &b);
	printf("請輸入每小時的工資:");
	scanf_s("%f", &c);
	printf("請輸入每周銷售量:");
	scanf_s("%f", &d);
	printf("請輸入每件產品獲得的金額:");
	scanf_s("%f", &e);
	printf("請輸入每周做幾件產品:");
	scanf_s("%f", &f);
	
	printf("請輸入要計算的代號:");
	scanf_s("%d", &num);
	switch (num)
	{
		case 1: printf("經理每周的薪水:%8.2f", a);
				break;
		case 2: if (b > 40)
		{
			g = (b - 40)*c*1.5 + 40 *c;
			printf("工人每周的薪水:%8.2f\n", g);
		}
			else
		{
			g = b * c;
			printf("工人每周的薪水:%8.2f\n", g);
		}
				break;
		case 3: g = 250 + 0.057*d;
			    printf("傭金工人每周的薪水:%8.2f\n", g);
				break;
		case 4:g = f * e;
			  printf("工作人員每周的薪水:%8.2f\n", g);
			  break;
		default:printf("錯誤\n");
	}






	system("pause");

}