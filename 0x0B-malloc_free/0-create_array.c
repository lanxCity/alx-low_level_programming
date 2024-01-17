#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size: param1
 * @c: param2
 * Return: character
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int i;
	/**/
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	/**/
	return (arr);
}
