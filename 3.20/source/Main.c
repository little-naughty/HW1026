#include <stdio.h>

int main()
{
	int a = 0,x = 0;
	float b = 0,t = 0;

	do
	{
		printf("Enter # of hours worked (-1 to end)¡G");
		scanf("%d", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00)¡G");
		scanf("%f", &b);
		if (a > 40)
		{
			t = a * b + b / 2 * (a - 40);
		}
		else
		{
			t = a * b;
		}
		printf("Salary is %.2f\n\n", t);
	} while (x == 0);

	return 0;
}