#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: integer
 */

int main(void)
{
	long int n1, n2, n3, nth;

	n1 = 1;
	n2 = 2;

	printf("%ld, %ld, ", n1, n2);

	/*Number of existing sequence; n1 and n2*/
	nth = 2;

	while (nth <= 50)
	{
		n3 = n1 + n2;
		printf("%ld", n3);

		if (nth != 50)
			printf(", ");

		n1 = n2;
		n2 = n3;

		nth++;
	}
	printf("\n");
	return (0);
}
