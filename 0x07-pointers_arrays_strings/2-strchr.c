#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to locate
 *
 * Return: pointer to s[firt occurence of c] or
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	int length = 0;
	
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
