#include <stdio.h>
#include "main.h"
/**
 * _puts - Determines the length of a string
 * @str: param
 * Return: void
 */
void _puts(char *str)
{
	int i;
	/**/
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	printf("\n");
}
