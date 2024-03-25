#include "main.h"

/**
 * *_strncat - check the code
 * @dest: param
 * @src: param
 * @n: param
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen, srclen, i;
	/**/
	destlen = srclen  = 0;
	while (src[srclen])
		srclen++;
	while (dest[destlen])
		destlen++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	return (dest);

}
