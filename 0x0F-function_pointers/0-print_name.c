#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function
 * @name: param1
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	/**/
	f(name);
}
