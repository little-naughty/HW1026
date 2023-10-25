#include <stdio.h>

int main()
{
	for (int x = 1; x <= 3; x++)
	{
		for (int y = 1; y <= 12; y++)
		{
			if (x == 1 || x == 3 || (x == 2 && (y == 1 || y == 12)))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}