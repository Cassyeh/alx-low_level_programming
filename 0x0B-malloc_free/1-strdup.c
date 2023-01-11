#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: the string to be duplicated
 *
 * Return: On success, return a pointer to the duplicated string
 * return NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	array = malloc((i + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		array[a] = str[a];
	}
	return (array);
}
