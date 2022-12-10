#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int n1;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n = (n1 + 1); n <= '9'; n++)
		{
			putchar(n1);
			putchar(n);
			if (n1 != '8' || n != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
