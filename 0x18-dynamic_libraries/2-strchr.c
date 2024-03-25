#include "main.h"
#include <stddef.h>
/**
 * _strchr - A function
 * @s: param1
 * @c: param2
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (NULL);
}

