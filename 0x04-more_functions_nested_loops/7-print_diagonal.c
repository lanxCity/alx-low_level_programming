#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: param
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;
	/**/
	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar('\\');
				_putchar(' ');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
