#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to reverse and print
 * return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		length--;
	}
	_putchar('\n');
}
