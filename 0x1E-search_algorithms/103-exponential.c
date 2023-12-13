#include "search_algos.h"

int binary_search_func(int *array, int value,
			 size_t left, size_t right);
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
 * binary_search_func - searches for a value in an integer array using a
 * binary search algorithm, (modified from 'binary_search')
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @left: starting index
 * @right: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_func(int *array, int value,
			 size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing 'value', or -1 if 'value' not found or
 * 'array' is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = min(bound, size - 1);
	/* 'found' message generated even if array[right] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_func(array, value, left, right));
}
