#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		if (i <= 4)
		{
			for (j = 0; j < 4 - i; j++)
				printf(" ");
			for (j = 0; j < (1 + 2 * i); j++)
				printf("*");
		}
		if (i > 4)
		{
			for (j = 0; j < i - 4; j++)
				printf(" ");
			for (j = 0; j < (8 - i) * 2 + 1; j++)
				printf("*");
		}
		printf("\n");
	}


	printf("\n");


	system("pause");

}