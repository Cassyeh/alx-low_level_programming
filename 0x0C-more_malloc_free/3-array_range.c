#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers of values from min to max
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[i] = i;
	}
	return (array);
}
