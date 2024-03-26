#include <stdio.h>
#include "main.h"
/**
 * _puts - Determines the length of a string
 * @str: param
 * Return: void
 */
void _puts(char *s)
{
	int i;
	/**/
	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
