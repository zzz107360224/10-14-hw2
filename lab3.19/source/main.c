#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	float a, b, c, d;
	for (; ;)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f",&b);
		if (b == -1)
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &c);
		printf("Enter term of the loan in days:");
		scanf_s("%f",& a);
		d = (a / 365)*c*b;
		printf("The interest charge is $ %8.3f\n", d);

		printf("\n");
	}


	system("pause");

}