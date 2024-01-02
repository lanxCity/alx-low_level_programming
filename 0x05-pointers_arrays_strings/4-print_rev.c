#include <stdio.h>
#include "main.h"
/**
 * print_rev - Determines the length of a string
 * @s: param
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	/**/
	for (i = 0; s[i]; i++)
		continue;

	i = i - 1;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}

	printf("\n");
}
