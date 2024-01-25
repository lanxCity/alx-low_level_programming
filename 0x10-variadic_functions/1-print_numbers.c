#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints int numbers
 * @separator: print separator
 * @n: number of integer passed
 * @...: A list of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arg;
	va_list arg_list;
	/**/
	if (separator == NULL)
		return;
	/**/
	va_start(arg_list, n);
	/**/
	for (i = 0; i < n; i++)
	{
		arg = va_arg(arg_list, int);
		/**/
		if (i != n - 1)
			printf("%d%s", arg, separator);
		else
			printf("%d\n", arg);
	}
}

