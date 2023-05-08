#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to the file.
 * @letters: the number of letters to read and print.
 * Return: 0 on failure, or the number of bytes on sucess.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_fILENO, buffer, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}