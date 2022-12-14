#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *starting with the first character,
 * followed by a new line.
 * @str: string to input into function
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	i = 0;
	while (str[i] != '\0' && i <= length - 1)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
