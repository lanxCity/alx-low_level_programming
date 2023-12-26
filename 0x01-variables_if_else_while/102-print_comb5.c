#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success(0)
 *
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{	
					if (((k + l) > (i + j) && i >= k) || i < k)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
						putchar(',');
						putchar(' ');
					}

					l++;
				}

				k++;
			}

			j++;
		}

		i++;
	}
	putchar('\n');
	return (0);
}
