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
	int size1, size2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/**/
	size1 = counter(s1);
	size2 = counter(s2);

	new = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	/**/
	if (new == NULL)
		return (NULL);

	i = 0;
	if (size1 != 0)
	{
		while (s1[i] != '\0')
		{
			new[i] = s1[i];
			i++;
		}
	}

	j = 0;
	if (size2 != 0)
	{
		while (s2[j] != '\0')
		{
			new[i] = s2[j];
			i++;
			j++;
		}
	}
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

	/*printf("%d\n", size);*/

	return (size);
}



