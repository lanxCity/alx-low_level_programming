#include "lists.h"
#include <stdio.h>

/**
 * _strlen - Determines the length of a string
 * @s: param
 * Return: returns the length of a string
 */
int _strlen(const char *s)
{
	int i;
	/**/
	for (i = 0; *(s + i) != '\0'; i++)
		continue;
	/**/
	return (i);
}
