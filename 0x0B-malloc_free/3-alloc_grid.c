#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: param1
 * @height: param2
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (!width || 0 > width || !height || 0 > height)
		return (NULL);

	/*--> For rows*/
	matrix = (int **)malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < width; ++i)
	{
		/*-->For columns*/
		matrix[i] = (int *)malloc(width * sizeof(int));

		if (matrix[i] == NULL)
		{
			/*Free previously allocated memory before returning NULL*/
			for (j = 0; j < i; ++j)
				free(matrix[j]);
			free(matrix);
			/**/
			return (NULL);
		}

		/*-->Assigning value*/
		j = 0;
		while (j < width)
		{
			matrix[i][j] = 0;
			j++;
		}
	}

	return (matrix);

}












