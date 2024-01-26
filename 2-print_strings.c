#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints int numbers
 * @separator: print separator
 * @n: number of integer passed
 * @...: A list of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, is_null;
	va_list arg_list;
	/**/
	va_start(arg_list, n);
	/**/

	is_null = 0;
	for (i = 0; i < n; i++)
	{
		if (i <= n - 1 && !(va_arg(arg_list, char *)))
		{
			is_null = 1;
			printf("nil");
			break;
		}
	}

	va_end(arg_list);

	/*Restarting the list*/
	va_start(arg_list, n);

	if (!is_null)
	{
		for (i = 0; i < n; i++)
		{
			/**/
			printf("%s", va_arg(arg_list, char *));
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg_list);
}

