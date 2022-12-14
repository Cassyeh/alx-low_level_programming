#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + (n % 10));
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('0' + (n % 10));
	}
	return (n % 10);
}
