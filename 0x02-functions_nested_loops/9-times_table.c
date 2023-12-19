#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (j < 9)
			{
				printf("%d, ", n);

				if (n + i < 10)
					printf(" ");
			}
			else
				printf("%d", n);
		}

		printf("\n");
	}
}
