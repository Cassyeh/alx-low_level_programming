#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string to use
 * return: half of string
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length / 2) + 1;
	}
	while (str[i] != '\0' && i <= length - 1)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
