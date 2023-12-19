#include "main.h"

/**
 * print_sign - To print the sign of an integer
 *
 * @n: param
 *
 * Return: 1, if greater that 0... 0, if it is 0... -1, if less thatn 0...
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


