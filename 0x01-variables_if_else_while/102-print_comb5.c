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

	int t;

	int o;

	for (n = '0'; n <= '9'; n++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			for (t = n; t <= '9'; t++)
			{
				for (o = n1 + 1; o <= '9'; o++)
				{
					putchar(n);
					putchar(n1);
					putchar(' ');
					putchar(t);
					putchar(o);
					if (!((n == '9' && n1 == '8') && (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
