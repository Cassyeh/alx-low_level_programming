#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires '-lm' */

size_t min(size_t val_a, size_t val_b);

/**
 * min - returns the minimum of two size_t values
 * @val_a: first value
 * @val_b: second value
 *
 * Return: val_a if <= val_b, val_b otherwise
 */
size_t min(size_t val_a, size_t val_b)
{
	return (val_a <= val_b ? val_a : val_b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing 'value', or -1 if 'value' not found or
 * 'array' is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (right = 0; right < size && array[right] < value;
	     left = right, right += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       right, array[right]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left <= min(right, size - 1); left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}
