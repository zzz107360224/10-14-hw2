#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b;
	for (;;)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		b = a * 0.09 + 200;
		printf("Salary is %8.3f\n", b);
		printf("\n");
	}
	system("pause");



}