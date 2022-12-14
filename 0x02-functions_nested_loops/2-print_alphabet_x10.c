#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int x;

	char alphabet;

	for(x = 1; x <= 10; x++)
	{
	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
}
