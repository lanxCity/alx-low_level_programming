#include "main.h"

/**
 * rev_string - check the code
 *@s: param
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	/**/
	while (s[count])
		count++;
	/**/
	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}


}


