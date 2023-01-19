#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for a particular integer in array
 * @array: array of integers to be searched
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element that cmp function does not return(0).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
		{
			break;
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (i);
}
