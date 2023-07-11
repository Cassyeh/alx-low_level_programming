#include "main.h"

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
	ssize_t count;
	int filedsc;

	buff = (char *) malloc((letters + 1) * sizeof(char));
	if (filename == NULL)
	{
		return (0);
	}
	if (buff == NULL)
		return (0);
	filedsc = open(filename, O_RDONLY);
	if (filedsc == -1)
	{
		free(buff);
		return (0);
	}
	i = read(filedsc, buff, letters);
	if (i == -1)
	{
		free(buff);
		close(filedsc);
		return (0);
	}
	count = write(1, buff, i);
	if (count == -1)
	{
		free(buff);
		close(filedsc);
		return (0);
	}
	close(filedsc);
	return (i);
}
