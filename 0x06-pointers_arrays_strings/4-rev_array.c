#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	/**/
	for (j = 0; j < n--; j++)
	{
		i = a[j];
		a[j] = a[n];
		a[n] = i;
	}

}
