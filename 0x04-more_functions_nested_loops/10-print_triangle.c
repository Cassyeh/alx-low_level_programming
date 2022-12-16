#include "main.h"

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
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
			for (width = size - 1; width > height - 1; width--)
			{
			_putchar(' ');
			}
			for (width = 1; width <= height; width++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
