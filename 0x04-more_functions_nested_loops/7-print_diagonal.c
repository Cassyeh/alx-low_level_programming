#include "main.h"

/**
 * print_diagonal - print character '\' n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (spaces = 1; spaces <= i - 1; spaces++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
