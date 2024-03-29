#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: param1
 * Return: pointer or Null
 */
char *_strdup(char *str)
{
	int i, size;
	char *newStr;
	/**/
	if (str == NULL)
		return (NULL);
	/**/
	size = 0;
	while (str[size] != '\0')
		size++;
	/**/
	newStr = (char *)malloc(sizeof(char) * (size + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < size && str[i] != '\0'; i++)
		newStr[i] = str[i];

	return (newStr);
}
