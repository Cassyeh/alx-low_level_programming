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
	int a;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		for (a = min; a <= max; a++)
		{
			array[i] = a;
			i++;
		}
		break;
	}
	return (array);
}
