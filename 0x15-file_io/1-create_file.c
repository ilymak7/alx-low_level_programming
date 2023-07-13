#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: content of the file.
 *
 * Return: 1 if success, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int f, n_l, w;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n_l = 0, text_content[n_l]; n_l++)
		;
	w = write(f, text_content, n_l);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
