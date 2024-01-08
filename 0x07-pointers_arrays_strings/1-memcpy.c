#include "main.h"
/**
 * _memcpy - A function
 *
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

