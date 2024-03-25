#include "main.h"

/**
 * _strspn - A function
 * @s: param1
 * @accept: param2
 *
 * Return: charater
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; s[i] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}

