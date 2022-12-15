#include "main.h"

/**
 * print_square - print a square of #'s given size
 * @size: size to draw
 */

void print_square(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

