#include "main.h"

/**
 * puts_half - check the code
 *@str: param
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, n;


	i = 0;
	while (str[i])
		i++;

	n = (i - 1) / 2;
	for (j = n + 1; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
