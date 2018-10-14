#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("(A)");
	printf("\t\t");
	printf("(B)");
	printf("\t\t");
	printf("(C)");
	printf("\t\t\t");
	printf("(D)");

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		for (j = 0; j < (15 - i); j++)
		{
			printf(" ");

		}
		printf("\t");
		
		for (j = 0; j < (15 - i); j++)
		{
			if(i!=0)
			printf("*");
		}
		for (j = 0; j < i; j++)
		{
			printf(" ");

		}
		printf("\t");

		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (15 - i); j++)
		{
			if (i != 0)
			printf("*");
		}
		printf("\t");
	
		for (j = 0; j < (15 - i); j++)
		{
			printf(" ");
		}

		for (j = 0; j < i; j++)
		{

			printf("*");
		}













		printf("\n");
	}
		system("pause");


	
}