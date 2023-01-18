#include "function_pointers.h"
/**
 * print_name - points to a function that prints a name
 * @name: name in string
 * @f: pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
