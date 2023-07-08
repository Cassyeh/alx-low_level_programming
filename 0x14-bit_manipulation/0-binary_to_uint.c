#include "main.h"

/**
 * power - function to evaluate a number raised to power of other number
 * @a: number to the power of
 * @b: the power to be raised
 * Return: result of power
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i = 1;
	unsigned int temp = a;

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
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

unsigned int _atoi(const char *s)
{
	unsigned int i, n, len, digit;

	i = 0;
	n = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			n = n * 10 + digit;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (n);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = _atoi(b);
	unsigned int digits = num_digits(res);
	unsigned int div = 10;
	unsigned int j = power(div, digits - 1);
	unsigned int g;
	unsigned int h = 0;
	unsigned int i;
	unsigned int k = digits - 1;

	for (i = 0; i < digits; i++)
	{
		g = res / j;
		res = res % j;
		h = h + (g * power(2, k));
		j = j / div;
		k--;
	}
	return (h);
}
