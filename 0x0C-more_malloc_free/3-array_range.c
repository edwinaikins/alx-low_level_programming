#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ast;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ast = malloc(sizeof(int) * size);

	if (ast == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ast[i] = min++;

	return (ast);
}
