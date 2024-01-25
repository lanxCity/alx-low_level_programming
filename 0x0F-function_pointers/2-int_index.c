#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function
 * @array: param1
 * @size: param2
 * @cmp: param3
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/**/
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
