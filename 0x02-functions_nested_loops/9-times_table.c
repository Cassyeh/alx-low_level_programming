#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int rows, columns, product;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
		product = columns * rows;
		if (columns == 0)
		{
			_putchar('0' + product);
		}
		
		if (product <= 9 && columns != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + product);
		}
		else if (product > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (product / 10));
			_putchar('0' + (product % 10));
		}
		}
		_putchar('\n');
	}
}
