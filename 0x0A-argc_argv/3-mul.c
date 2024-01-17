#include <stdio.h>

int multargs(int count, char *myargs[]);

/**
 * main - function
 *
 * @argc: param1
 * @argv: param2
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	multargs(argc, argv);
	return (0);
}

/**
 * multargs - function
 * @count: param1
 * @myargs: param2
 * Return: int
 */
int multargs(int count, char *myargs[])
{
	char *str;
	int j, len, sign_written, newarg, num, tens, n, mult;

	mult = 1;
	for (n = 1; n < count; n++)
	{
		str = myargs[n];
		for (len = 0; str[len] != '\0'; len++)
			continue;
		len -= 1;
		newarg = sign_written = 0;
		tens = 1;
		while (len >= 0)
		{
			j = str[len];
			if (j >= 48 && j <= 57)
			{


				num = (j - 48) * tens;
				newarg += num;
				tens *= 10;
			}
			else if (j == 45 && len == 0)
			{
				sign_written = 1;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			len--;
		}
		if (sign_written)
			newarg *= -1;
		mult *= newarg;
	}
	printf("%d\n", mult);

	return (0);
}












