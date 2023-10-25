#include <stdio.h>

int main()
{
	for (int x = 1; x < 500; x++)
	{
		for (int y = x; y < 500; y++)
		{
			for (int z = y; z < 500; z++)
			{
				if (x * x + y * y == z * z)
				{
					printf("%d,%d,%d\n", x, y, z);
				}
			}
		}
	}

	return 0;
}