#include "main.h"

/**
 * print_number -  C program to print a long int number
 * @n: using putchar() only
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}


