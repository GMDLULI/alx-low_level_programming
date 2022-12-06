#include <stdio.h>
#include "main.h"

/**
  * read_textfile - reads and prints a file
  * @filename: pointer to file name
  * @letters: number of letters of read
  * Return: file contant
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fb, i, w;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fb = open(filename, O_RDONLY);
	i = read(fb, buff, letters);
	w = write(STDOUT_FILENO, buff, i);

	if (fb == -1 || i == -1 || w == -1 | w != i)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fb);

	return (w);
}


