#include <stdio.h>

int main()
{
	printf("(A)\n"); 
	for (int x = 1; x <= 10; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(B)\n");
	for (int x = 1; x <= 10; x++)
	{
		for (int y = 10; y >= x; y--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("(C)\n");
	for (int x = 1; x <= 10; x++)
	{
		for (int y = 1; y <= 10; y++)
		{
			if (y < x)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(D)\n");
	for (int x = 10; x >= 1; x--)
	{
		for (int y = 1; y <= 10; y++)
		{
			if (y < x)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}