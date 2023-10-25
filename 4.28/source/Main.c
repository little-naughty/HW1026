#include <stdio.h>

int main()
{
	int pc = 0;
	double ManSal = 0, hwSal = 0, sales = 0, wh = 0, np = 0, ep = 0;

	while (pc != -1)
	{
		printf("Enter your paycode (-1 to end)¡G");
		scanf("%d", &pc);
		if (pc == -1)
		{
			break;
		}
		else
		{
			switch (pc)
			{
			case 1:
				printf("Enter your weekly salary¡G");
				scanf("%lf", &ManSal);
				printf("Salary is $%.2f\n\n", ManSal);
				break;
			case 2:
				printf("Enter your worked hours¡G");
				scanf("%lf", &wh);
				printf("Enter your salary per hours¡G");
				scanf("%lf", &hwSal);
				if (wh > 40)
				{
					printf("Salary is $%.2f\n\n", wh * hwSal + (wh - 40) * hwSal / 2);
				}
				else
				{
					printf("Salary is $%.2f\n\n", wh * hwSal);
				}
				break;
			case 3:
				printf("Enter your sales¡G");
				scanf("%lf", &sales);
				printf("Salary is $%.2f\n\n", 200 + sales * 57 / 100);
				break;
			case 4:
				printf("Enter your number of work piece¡G");
				scanf("%lf", &np);
				printf("Enter your how much each piece¡G");
				scanf("%lf", &ep);
				printf("Salary is $%.2f\n\n", np * ep);
				break;
			}
		}
	}

	return 0;
}