#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: number of elements in array
 * @size: number of bytes for each element in array
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if ((nmemb == 0) | (size == 0))
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
