#include "main.h"

/**
 * append_text_to_file - A function
 * @filename: param1
 * @text_content: param2
 * Return: the number of letters
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t n;
	int fadd;
	char c;
	/*ssize_t bytes;*/

	if (filename == NULL)
		return (-1);

	fadd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);

	if (fadd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (read(fadd, &c, 1) != 0)
			continue;

		for (n = 0; text_content[n] != '\0'; n++)
		{
			c = text_content[n];
			/**/
			if (write(fadd, &c, 1) != 1)
			{
				close(fadd);
				return (-1);
			}
		}
	}

	close(fadd);
	/**/
	/*if (chmod(filename, S_IRUSR | S_IWUSR) == -1)*/
	/*	return (-1);*/

	return (1);
}
