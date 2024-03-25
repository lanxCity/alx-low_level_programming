#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *
 * @c: param
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' + 0 && c <= '0' + 9)
		return (1);
	return (0);
}
