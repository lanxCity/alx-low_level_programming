#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l, exitLoop;

	i = 0;
	exitLoop = 0;

	while (i <= 2 && !exitLoop)
	{
		j = 0;
		while (j <= 9 && !exitLoop)
		{
			for (k = 0; k <= 5 && !exitLoop; k++)
			{
				for (l = 0; l <= 9 && !exitLoop; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					if (i == 2 && j == 3 && k == 5 && l == 9)
					{
						exitLoop = 1;
						break;
					}
				}
			}

			j++;
		}
		i++;
	}
}
