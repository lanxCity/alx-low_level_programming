#include "main.h"
#include <stdlib.h>
#include <stdio.h>


int counter(char *str);

/**
 * str_concat - function
 *
 * @s1: param1
 * @s2: param2
 * Return: charcter
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int size, i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/**/
	size = counter(s1);
	new = (char *)malloc(sizeof(char) * (size + 1));
	/**/
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	/**/
	size = counter(s2);
	new = realloc(new, sizeof(char) * size);
	/**/
	j = 0;
	while (s2[j] != '\0')
	{
		new[i] = s2[j];

		i++;
		j++;
	}

	if (new == NULL)
		return (NULL);
	return (new);
}

/**
 * counter - function
 * @str: param
 * Return: int
 */
int counter(char *str)
{
	int size;

	size = 0;

	while (str[size] != '\0')
		size++;

	return (size);
}



