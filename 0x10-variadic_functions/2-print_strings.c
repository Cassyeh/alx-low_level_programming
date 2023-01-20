#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings in function parameters and new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *a;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char*);
		if (a == NULL && i != n - 1 && separator != NULL)
		{
			printf("(nil)%s", separator);
		}
		else if (a == NULL && i == n - 1)
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s%s", a, separator);
		}
		else if (i == n - 1)
		{
			printf("%s", a);
		}
	}
	printf("\n");
}
