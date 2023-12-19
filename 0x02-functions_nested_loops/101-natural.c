#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: integer
 */

int main(void)
{
	int n, total;

	total = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			total += n;
	}

	printf("%d\n", total);
	return (0);
}
