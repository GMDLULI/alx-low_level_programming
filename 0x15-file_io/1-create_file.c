#include <stdio.h>
#include "main.h"
/**
  * create_file - creates a new file
  * @filename: pointer to the file name
  * @text_content: pointer to the string
  * Return: 1 on success otherwise -1
  */

int create_file(const char *filename, char *text_content)
{
	int fb, w, i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			i++;
	}

	fb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fb, text_content, i);

	if (fb == -1 || w == -1)
		return (-1);

	close(fb);

	return (1);
}
