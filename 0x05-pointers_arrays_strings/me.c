#include <stdio.h>
#include "main.h"
/**
 * _puts - Determines the length of a string
 * @str: param
 * Return: void
 */
int main()
{
	int i;
	char *str, letter;
	/**/
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	i = 0;

	printf("%c", *str);

	while (letter != '\0')
	{
		letter = *(str + i);
		printf("%c", letter);
		i++;
	}
	printf("\n");

	return (0);
}