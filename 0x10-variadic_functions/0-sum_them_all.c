#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - A summation function
 * @n: param1
 * @...: params
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list spread_args;
	/**/
	if (n == 0)
		return (0);
	/**/
	va_start(spread_args, n);
	total = 0;
	/**/
	for (i = 0; i < n; i++)
	{
		total += va_arg(spread_args, int);
	}
	/**/
	return (total);
}













