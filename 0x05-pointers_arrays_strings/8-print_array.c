#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0' && i <= n - 1 && n > 0)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
