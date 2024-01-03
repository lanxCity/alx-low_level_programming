#include <stdio.h>
#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: param
 * return: prints every other character
 */
void puts2(char *str)
{
	int i;
	/**/
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
