#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints the 9 times table, starting with 0
 *
 * @x: param
 * Return: void
 */
void print_times_table(int x)
{
	int i, j, n;

	if (x > 0 && x < 15)
	{
		for (i = 0; i <= x; i++)
		{
			for (j = 0; j <= x; j++)
			{
				n = i * j;
				/**/
				if (j < x)
				{
					printf("%d, ", n);
					/**/
					if (n + i < 10)
						printf("  ");
					else if (n + i < 100)
						printf(" ");
				}
				else
					printf("%d", n);
			}
			/**/
			printf("\n");
		}
	}
}
