#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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

	size = 0;

	while (s1[size] != '\0')
		size++;
	/**/
	new = (char *)malloc(sizeof(char) * (size + 1));
	/**/
	if (new == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		new[i] = s2[j];

		i++;
		j++;
	}


	return (new);
}







