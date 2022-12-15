#include "main.h"

/**
 * print_line - print the character '_' n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
