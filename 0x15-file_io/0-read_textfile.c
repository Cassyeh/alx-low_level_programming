#include "main.h"
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
	char *buff;
	ssize_t i;
	ssize_t count = 0;
	int filedsc;

	buff = (char *) malloc((letters + 1) * sizeof(char));
	if (filename == NULL)
	{
		return (0);
	}
	if (buff == NULL)
	{
		return (0);
	}
	filedsc = open(filename, O_RDONLY);
	if (filedsc == -1)
	{
		return (0);
	}
	i = read(filedsc, buff, letters);
	if (i == -1)
	{
		free(buff);
		close(filedsc);
		return (0);
	}
	while (count < i)
	{
		_putchar(buff[count]);
		count++;
	}
	close(filedsc);
	return (i);
}
