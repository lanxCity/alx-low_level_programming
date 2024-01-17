#include <stdio.h>
/**
 * main - Function
 * @argc: param1
 * @argv: param2
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;
	/**/
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
