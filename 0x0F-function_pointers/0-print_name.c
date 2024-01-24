#include "function_pointers.h"

/**
 * print_name - A function
 * @name: param1
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

	return;
}
