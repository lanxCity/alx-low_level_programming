#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Main function
 * @argc: argument counter
 * @argv: argument values (array of strings)
 * Return: integers
 */
int main(int argc, char *argv[])
{
	int a, b, rslt;
	char *op;
	/*Get the operation function based on the string*/
	int (*operation_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/*Operator*/
	op = argv[2];

	if (strcmp(op, "+") != 0 &&
			strcmp(op, "-") != 0 &&
			strcmp(op, "*") != 0 &&
			strcmp(op, "/") != 0 &&
			strcmp(op, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation_func = get_op_func(op);
	rslt = operation_func(a, b);

	printf("%d\n", rslt);

	return (0);
}













