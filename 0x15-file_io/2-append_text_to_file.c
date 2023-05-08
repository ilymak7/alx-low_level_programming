#include "main.h"

/**
 * append_text_to_file - a function that appends text to  a file
 * @filename: pointer to the file.
 * @text_content: text to append.
 * Return: 0 on failure, 1 on sucess.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
