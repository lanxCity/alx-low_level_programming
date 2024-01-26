#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	char *current_str;
	
	va_start(arg_list, n);
	
	for (i = 0; i < n; i++)
	{
		current_str = va_arg(arg_list, char *);
		
		if (current_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_str);
			
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg_list);
}
