#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13 speak
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int i;
	int j;
	char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char b[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
