#include "main.h"

/**
 * num_digits - function to count digits in a number
 * @num: number to be counted
 * Return: digits
 */
unsigned int num_digits(unsigned int num)
{
	unsigned int div = 10;
	unsigned int res = num;
	unsigned int digits = 1;

	if (num >= 1 && num <= 9)
	{
		return (digits);
	}
	else
	{
		while (res > 9)
		{
			res = res / div;
			digits++;
		}
	}
	return (digits);
}

/**
 * pow - function to evaluate a number raised to power of other number
 * @a: number to the power of
 * @b: the power to be raised
 * Return: result of power
 */
unsigned long int powr(unsigned long int a, unsigned long int b)
{
	unsigned int i = 1;
	unsigned long int temp = a;

	if (b == 0)
	{
		return (1);
	}
	else
	{
		while (i < b)
		{
			a = temp * a;
			i++;
		}
	}
	return (a);
}

/**
 * print_bin - function that prints the binary representation of a number
 * @n: decimal number to be converted
 *
 * Return: converted binary number
 */

unsigned long int print_bin(unsigned long int n)
{
	int i;
	unsigned long int bin;
	unsigned long int tmp;
	unsigned long int k = 0;

	for (i = 32; i >= 0; i--)
	{
		if (n == 0)
		{
			break;
		}
		bin = (unsigned long int)(powr(2, i));
		if (n >= bin)
		{
			tmp = (unsigned long int)(powr(10, i));
			k = k + tmp;
			n = n - bin;
		}
	}
	return (k);
}

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin_2;
	unsigned long int bin = print_bin(n);
	unsigned int digits = num_digits(bin);
	int num = (n >> index);

	if (digits < index || digits == 0)
	{
		return (-1);
	}
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bin_2 = print_bin(num);
	num = bin_2 % 10;
	return (num);
}
