#include <stdio.h>
#include "main.h"
/**
 * _puts - Determines the length of a string
 * @str: param
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char letter;
	/**/
	i = 0;
	while (letter != '\0')
	{
		letter = *(str + i);
		printf("%c", letter);
		i++;
	}
	printf("\n");
}
