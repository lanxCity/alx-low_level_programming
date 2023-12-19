#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: integer
 */

int main(void)
{
	long int n1, n2, n3, even_sum;

	n1 = 1;
	n2 = 2;

	even_sum = 2;
	n3 = n1 + n2;

	while (n3 < 4000000)
	{
		if (n3 % 2 == 0)
			even_sum += n3;

		n1 = n2;
		n2 = n3;

		n3 = n1 + n2;
	}
	printf("%ld\n", even_sum);
	return (0);
}
