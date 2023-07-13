#include"main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: filename
 * @letters: letters
 * Return: printed letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	close(f);
	free(buffer);
	return (w);

}
