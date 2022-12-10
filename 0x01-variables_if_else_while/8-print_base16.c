#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	char ch1 = 'a';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
	{
		putchar(ch1);
	}
	putchar('\n');
	return (0);
}
