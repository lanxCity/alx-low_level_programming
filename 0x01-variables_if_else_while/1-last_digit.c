#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Alway success (0)
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = (n % 10);

	if (x < 0)
		x *= -1; 

	if (x == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}
