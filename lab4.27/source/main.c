#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	float x,a[2];
	for (; ;)
	{
		
		printf("輸入三個數字:");
		scanf_s("%f %f %f", &a[0], &a[1], &a[2]);
		for (i = 0; i < 2; i++)
		{
			for (j = i+1; j < 3;j++)
			{
				if (a[j] > a[i])
				{
					x = a[i];
					a[i] = a[j];
					a[j] = x;
				}
			}

		}
		printf("三邊為%.f %.f %.f\n", a[0], a[1], a[2]);
			if (a[0] >= 500)
				printf("請輸入500以內的數字\n");
			if (a[0] >= a[1] + a[2])
				printf("這不是三角形的三邊\n");
			if (a[0] * a[0] != a[1] * a[1] + a[2] * a[2])
				printf("這不是直角三角形\n");

			if (a[0] * a[0] ==a[1] * a[1] + a[2] * a[2])
				printf("這是直角三角形\n");

	}

	system("pause");

}