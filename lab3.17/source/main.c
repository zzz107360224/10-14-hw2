#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	float a, b, c, d, e,f;
	
	for (; ;)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter beginning balance :");
		scanf_s("%f", &b);
		printf("Enter total charges :");
		scanf_s("%f", &c);
		printf("Enter total credits :");
		scanf_s("%f", &d);
		printf("Enter credit limit :");
		scanf_s("%f", &e);
		
		f = b + c - d;
	
			if (f>e)
			{
				printf("Account: %f\n", a);
				printf("Crdeit  Limit:%f\n", e);
				printf("Balance: %f\n", f);
				printf("Credit Limit Exceeded\n");
			}

			printf("\n");

	}



	system("pause");




}