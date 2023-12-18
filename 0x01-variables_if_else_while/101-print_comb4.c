#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	int i, j, k, increament, increament2;

	j = 1;
	increament = 1;

	k = 2;
	increament2 = 2;

	for (i = 0; i < 8; i++)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}
			increament2++;
			k = increament2;

			j++;
		}

		increament++;
		j = increament;

		increament2 = increament + 1;
		k = increament2;
	}

	putchar('\n');
	return (0);
}
