#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: integer
 */

int main(void)
{
	long int n1, n2, n3;

	n1 = 2;
	n2 = 4;

	printf("%ld, %ld, ", n1, n2);

	n3 = n1 + n2;

	while (n3 < 4000000)
	{
		printf("%ld", n3);

		n1 = n2;
		n2 = n3;

		n3 = n1 + n2;

		if (n3 < 4000000)
			printf(", ");
	}
	printf("\n");
	return (0);
}
