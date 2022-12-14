#include "main.h"
/**
 */
void print_times_table(int n){
	int rows, columns, product;

	if (n >= 0 && n <= 15){
		for (rows = 0; rows <= n; rows++){
			for (columns = 0; columns <= n; columns++){
				product = (rows * columns);
			if (columns == 0){
			_putchar('0' + product);
			}
			else if (product <= 9){
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + product);
			}
			else if ((product > 9) && (product < 100)){
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (product / 10));
			_putchar('0' + (product % 10));
			}
			else if (product > 99){
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (product / 100));
			_putchar('0' + ((product / 10) % 10));
			_putchar('0' + (product % 10));
			}
		}	
			_putchar('\n');}	
	}
}
