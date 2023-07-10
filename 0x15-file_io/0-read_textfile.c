#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of text file
 * @letters: number of letters it should read and print
 *
 * Return: number of letters or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t i = 0;
	FILE *fileptr = NULL;

	fileptr = fopen(filename, "r");
	if (filename == NULL)
	{
		return (0);
	}
	if (fileptr == NULL)
	{
		return (0);
	}
	while (i < letters)
	{
		c = fgetc(fileptr);
		if (feof(fileptr))
		{
			break;
		}
		_putchar(c);
		i++;
	}
	fclose(fileptr);
	return (i);
}
