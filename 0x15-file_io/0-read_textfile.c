#include "main.h"

/**
 * read_textfile - A function
 * @filename: param1
 * @letters: param2
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t n;
	FILE *fadd;
	char c;

	if (filename == NULL)
		return (0);

	fadd = fopen(filename, "r");

	if (fadd == NULL)
		return (0);

	for (n = 0; n < letters && (c = fgetc(fadd)) != EOF; n++)
	{
		if (write(1, &c, 1) != 1)
			return (0);
	}	

	fclose(fadd);

	return (n);
}
