#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - function
 * @array: param1
 * @action: param2
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
