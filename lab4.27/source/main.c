#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	float x,a[2];
	for (; ;)
	{
		
		printf("��J�T�ӼƦr:");
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
		printf("�T�䬰%.f %.f %.f\n", a[0], a[1], a[2]);
			if (a[0] >= 500)
				printf("�п�J500�H�����Ʀr\n");
			if (a[0] >= a[1] + a[2])
				printf("�o���O�T���Ϊ��T��\n");
			if (a[0] * a[0] != a[1] * a[1] + a[2] * a[2])
				printf("�o���O�����T����\n");

			if (a[0] * a[0] ==a[1] * a[1] + a[2] * a[2])
				printf("�o�O�����T����\n");

	}

	system("pause");

}