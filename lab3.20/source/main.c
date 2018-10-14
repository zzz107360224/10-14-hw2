#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b,c;
	for (; ;)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &b);
		if (a > 40)
		{
			c = (a - 40)*1.5*b + 40 * b;
			printf("Salary is $%8.3f\n", c);

		}
		else
		{
			c = b * a;
			printf("Salary is $%8.3f\n", c);
		}
		printf("\n");
	}

	system("pause");
}