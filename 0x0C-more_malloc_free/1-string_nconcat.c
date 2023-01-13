#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with n bytes from s2
 * @s1: string1
 * @s2: string2
 * @n: number of bytes of s2 to be added to s1
 *
 * Return: pointer to new string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int a, b, i = 0, j = 0;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j] != '\0')
			j++;
	}
	array = malloc((i + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		array[a] = s1[a];
	if (n >= j)
	{
		for (b = 0; b < j; b++)
		{
			array[a] = s2[b];
			a++;
		}
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			array[a] = s2[b];
			a++;
		}
	}
	array[a] = '\0';
	return (array);
}
