#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i > 9)
			putchar(i + 87);
		else
			putchar(i + '0');

	putchar('\n');
	return (0);
}
