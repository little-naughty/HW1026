#include <stdio.h>

int main()
{
	float a = 0, t = 0;
	int x = 0;

	do
	{
		printf("Enter sales in dollars (-1 to end)¡G");
		scanf("%f", &a);
		if (a == -1)
		{
			break;
		}
		t = a * 0.09 + 200;
		printf("Salary is¡G $%.2f\n\n", t);
	} while (x == 0);

	return 0;
}