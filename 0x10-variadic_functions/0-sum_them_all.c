#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its function parameters
 * @n: number of parameters
 *
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
