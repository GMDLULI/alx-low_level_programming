#include "main.h"

/**
  * append_text_to_file - appends text at the end of the file
  * @filename: pointer to the file name
  * @text_content: pointer to the string containing the text content
  * Return: 1 on success otherwise -1.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fb = open(filename, O_WRONLY | O_APPEND);
	w = write(fb, text_content, i);

	if (fb == -1 || w == -1)
		return (-1);
	close(fb);

	return (1);
}

