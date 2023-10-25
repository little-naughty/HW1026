#include <stdio.h>

int main()
{
	float a[5] = {5000,5000,5000,5000,5000};
	int x = 0;

	printf("Investmant of Money:5000\nYears:15\n");

	for (float y = 1; y <= 5; y++)
	{
		for (int z = 1; z <= 15; z++)
		{
			a[x] = a[x] + a[x] * y;
		}
		printf("Money with rate of %.2f is $%.2f\n", y * 100, a[x]);
		x++;
	}

	return 0;
}