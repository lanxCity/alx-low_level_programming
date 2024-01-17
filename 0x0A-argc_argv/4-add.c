#include <stdio.h>

int addargs(int count, char *myargs[]);

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
		printf("0\n");
		return (0);
	}

	addargs(argc, argv);
	return (0);
}

/**
 * addargs - function
 * @count: param1
 * @myargs: param2
 * Return: int
 */
int addargs(int count, char *myargs[])
{
	char *str;
	int j, len, newarg, num, tens, n, add;

	add = 0;
	for (n = 1; n < count; n++)
	{
		str = myargs[n];
		for (len = 0; str[len] != '\0'; len++)
			continue;
		len -= 1;
		newarg = 0;
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
			else
			{
				printf("Error\n");
				return (1);
			}
			len--;
		}
		add += newarg;
	}
	printf("%d\n", add);

	return (0);
}












