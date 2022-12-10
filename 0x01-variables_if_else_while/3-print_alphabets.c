#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	char ch1 = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
		putchar(ch1);
	}
	putchar('\n');
	return (0);
}
