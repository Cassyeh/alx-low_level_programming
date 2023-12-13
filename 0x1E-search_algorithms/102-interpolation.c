#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing 'value', or -1 if 'value' not found or
 * 'array' is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while ((array[right] != array[left]) &&
	       (value >= array[left]) && (value <= array[right]))
	{
		pos = left + (((double)(right - left) / (array[right] - array[left]))
			    * (value - array[left]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			left = pos + 1;
		else if (value < array[pos])
			right = pos - 1;
		else
			return (pos);
	}
	if (value == array[left])
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		return (left);
	}
	pos = left + (((double)(right - left) / (array[right] - array[left]))
		     * (value - array[left]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
