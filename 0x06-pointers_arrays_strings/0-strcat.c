#include "main.h"

/**
 * *_strcat - check the code
 *@dest: param 1
 *@src: param 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int destlen, srclen, i;

	destlen = srclen  = 0;

	while (src[srclen])
		srclen++;

	while (dest[destlen])
		destlen++;

	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];

	return (dest);

}

