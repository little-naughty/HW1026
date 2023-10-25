#include <stdio.h>

int main()
{
	float a = 0, b = 0,t = 0;
	int c = 0, x = 0;

	do
	{
		printf("Enter loan principal (-1 to end)¡G");
		scanf("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter interest rate¡G");
		scanf("%f", &b);
		printf("Enter term of the loan in days¡G");
		scanf("%d", &c);

		t = a * b * c / 365;

		printf("The interest charge is $%.2f\n\n", t);
	} while (x == 0);

	return 0;
}