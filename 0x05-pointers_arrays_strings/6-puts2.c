#include "main.h"

/**
 * puts2 - check the code
 *@str: param
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
		i++;


	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
