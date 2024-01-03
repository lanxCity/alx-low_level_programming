#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function
 * @dest: param1
 * @src: param2
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	/**/
	return (dest);
}
