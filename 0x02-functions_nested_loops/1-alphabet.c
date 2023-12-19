#include "main.h"

/**
 * print_alphabet - it print letters from a-z in lowercase
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

