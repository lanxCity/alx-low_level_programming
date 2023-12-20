#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: integer
 */

int main(void)
{
	unsigned long int n1, n2, n3, nth;

	n1 = 1;
	n2 = 2;

	printf("%lu, %lu, ", n1, n2);

	/*Number of existing sequence; n1 and n2*/
	nth = 12;

	while (nth < 98)
	{
		n3 = n1 + n2;
		printf("%lu", n3);

		if (nth < 97)
			printf(", ");

		n1 = n2;
		n2 = n3;

		nth++;
	}
	printf("\n");
	return (0);
}
