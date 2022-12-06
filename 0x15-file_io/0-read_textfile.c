#include "main.h"

/**
  * read_textfile - reads and prints a file
  * @filename: pointer to file name
  * @letters: number of letters of read
  * Return: file contant
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDWR, 0700);

	if (fd == -1)
	{
		return (0);
	}

	r = read(fd, buff, letters);

	if (r == -1)
	{
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);

	if (w == -1 || w != r)
		return (0);

	close(fd);

	free(buff);

	return (w);
}


