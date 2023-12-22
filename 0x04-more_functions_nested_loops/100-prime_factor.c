#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int num, i, j, ans, isPrime;

	num = 612852475143;
	i = 2;
	isPrime = 1;
	/* initialising answer as the original value*/
	ans = num;
	while (ans != 1)
	{
		if (isPrime && ans % i == 0)
		{
			ans /= i;
			/*printf("%lld", i);*/

			/*if (ans != 1)*/
			/*	printf(", ");*/
			/*else*/
				/*printf("\n");*/
			if (ans == 1)
				printf("%lld\n", i);
		}
		else
		{
			i++;
			/*Checking if the value of i is a prime number*/
			for (j = 2; j < i; j++)
			{
				if ((i % j != 0))
				{
					if (j != i - 1)
						continue;
					isPrime = 1;
				}
				else
				{
					isPrime = 0;
					break;
				}
			}
		}
	}
	return (0);
}
