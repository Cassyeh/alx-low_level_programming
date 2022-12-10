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

	int n2;

	for (n2 = '0'; n2 <= '9'; n2++)
	{
		for (n1 = (n2 + 1); n1 <= '9'; n1++)
		{
			for (n = (n1 + 1); n <= '9'; n++)
			{
				putchar(n2);
				putchar(n1);
				putchar(n);
				if (n2 != '7' || n1 != '8' || n != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
