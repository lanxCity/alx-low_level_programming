#include "main.h"

/**
 * _islower - Checking if an element is lowercase
 *
 * @c: param
 *
 * Return: 1, for lowercase and 0, for otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
