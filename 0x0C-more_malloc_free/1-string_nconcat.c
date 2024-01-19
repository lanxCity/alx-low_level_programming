#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function
 * @s1: param1
 * @s2: param2
 * @n: param3
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rslt;
	size_t len_s1, len_s2;
	/* If s1 and s2 is NULL, treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	/* If n is greater or equal to the length of s2, use the entire string s2*/
	if (n >= len_s2)
		n = len_s2;
	/*Allocate memory for the concatenated string*/
	rslt  = (char *)malloc(len_s1 + n + 1);
	/*Check if memory allocation was successful*/
	if (rslt == NULL)
		return (NULL);
	strcpy(rslt, s1);
	strncat(rslt, s2, n);
	return (rslt);
}
