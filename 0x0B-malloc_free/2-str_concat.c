#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings to new memory space location
 * @s1: string
 * @s2: string
 *
 * Return: pointer to new array or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0;
	int a = 0;
	int b;
	int c;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		a = 0;
	else
	{
		while (s2[a] != '\0')
			a++;
	}
	array = malloc((i + a + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < i; b++)
	{
		array[b] = s1[b];
	}
	for (c = 0; c < a; c++)
	{
		array[b] = s2[c];
		b++;
	}
	array[b] = '\0';
	return (array);
}
