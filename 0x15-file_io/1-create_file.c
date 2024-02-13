#include "main.h"

/**
 * create_file - A function
 * @filename: param1
 * @letters: param2
 * Return: the number of letters
 */
int create_file(const char *filename, char *text_content)
{
	size_t n;
	int fadd;
	char c;
	/*ssize_t bytes;*/

	if (filename == NULL)
		return (-1);

	fadd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR);

	if (fadd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n] != '\0'; n++)
		{
			c = text_content[n];
			
			if (write(fadd, &c, 1) != 1)
			{
				close(fadd);
				return (-1);
			}
		}
	}

	close(fadd);
	
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	return (1);
}
