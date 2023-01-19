#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select correct function for operation
 * @s: operator inputted
 *
 * Return: pointer to the function of operator inputted
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6 && *s != *(ops[i].op))
	{
		i++;
	}
	return ((ops[i]).f);
}
