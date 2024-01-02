#include "main.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers
 *
 * @a: param 1
 * @b: param 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	/**/
	c = *a;
	/**/
	*a = *b;
	*b = c;
}
