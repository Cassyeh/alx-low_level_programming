#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - points to a function that prints a name
 * @name: name in string
 * @f: pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
