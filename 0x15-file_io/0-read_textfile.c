#include "main.h"

/**
  * read_textfile - reads and prints a file
  * @filename: pointer to file name
  * @letters: number of letters of read
  * Return: file contant
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fb = open(filename, O_RDONLY);
	r = read(fb, buff, letters);
	w = write(STDOUT_FILENO, buff, i);

	if (fb == -1 || i == -1 || w == -1 | w != r)
		return (0);

	close(fb);

	free(buff):

	return (w);
}


