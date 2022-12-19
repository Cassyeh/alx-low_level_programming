#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev;
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (i = 0; i <= length - 1; i++)
	{
		rev = s[i];
		s[i] = s[length - 1];
		s[length - 1] = rev;
		length--;
	}
}
