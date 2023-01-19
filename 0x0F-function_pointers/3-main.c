#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations
 * @argc: count of arguments
 * @argv: array of strings of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	char *operator;
	int num3;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	num3 = (get_op_func(operator))(num1, num2);
	printf("%d\n", num3);
	return (0);
}
