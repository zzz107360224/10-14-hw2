#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j,a,b;
	printf("Enter the length : ");
	scanf_s("%d", &a);
	printf("Enter the breadth :");
	scanf_s("%d", &b);
	for (i = 0; i <b; i++)
	{
		for (j = 0; j < a ; j++)
		{
			if (i == 0 || i == (b-1) || j == 0 || j == (a-1))
			
				
					printf("+");
				else
					printf(" ");
				
			
			

		}
		printf("\n");
	}
	











	system("pause");
}