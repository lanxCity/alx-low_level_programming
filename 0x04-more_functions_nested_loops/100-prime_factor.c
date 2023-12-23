#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int value, new_val, mult, factor;
	int i;

	value = 612852475143;
	factor = 2;

	mult = 1;

	new_val = value;
	/**/
	while (mult < value)
	{
		if (new_val % factor == 0)
		{
			for (i = 2; i <= factor; i++)
			{
				if ((factor % i == 0) && i < factor)
					break;
				if (i == factor)
				{
					new_val = new_val / factor;
					mult = mult * factor;

					/*printf("%ld ", factor);*/
				}

			}
		}
		else
		{
			factor++;
		}
	}
	printf("%ld", factor);
	printf("\n");
	return (0);
}


















