#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	int i, j, increament;

	increament = 1;
	j = 1;

	for (i = 0; i < 9; i++)
	{
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		increament++;
		j = 0 + increament;
	}

	putchar('\n');
	return (0);
}
