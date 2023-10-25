#include <stdio.h>

int main()
{	
	int a = 0, x = 0;
	float b = 0, c = 0, d = 0, e = 0, t = 0;

	do
	{
		printf("Enter account number (-1 to end)¡G");
		scanf("%d", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter beginning balance¡G");
		scanf("%f", &b);
		printf("Enter total charges¡G");
		scanf("%f", &c);
		printf("Enter total credits¡G");
		scanf("%f", &d);
		printf("Enter credit limit¡G");
		scanf("%f", &e);

		t = b + c - d;

		printf("Account¡G%d\n", a);
		printf("Credit limit¡G%.2f\n", e);
		printf("Balance¡G%.2f\n", t);
		if (t > e)
		{
			printf("Credit Limit Exceeded.\n\n");
		}
		else
		{
			printf("\n");
		}
	} while (a != -1);

	return 0;
}