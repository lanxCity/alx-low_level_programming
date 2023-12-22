#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int counter, i, j, n;

	/**/
	for (n = 0; n < 10; n++)
	{
		i = 0;
		j = 0;
		counter = 0;

		while (counter < 15)
		{
			if (counter >= 10)
				i = 1;

			_putchar('0' + i);

			/**/
			if (counter >= 10)
			{
				/**/
				_putchar('0' + j);
				j++;
			}
			else
			{
				i++;
			}
			/**/
			counter++;
		}
		_putchar('\n');
	}
}
