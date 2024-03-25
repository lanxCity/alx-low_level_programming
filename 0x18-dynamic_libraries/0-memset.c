#include "main.h"

/**
 * _memset - A function
 *
 * @s: param1
 * @b: param2
 * @n: param3
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);


}
