#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *filename);
void close_file(int f);
/**
 * create_buffer - a function that allocates 1024 bytes to a buffer.
 * @filename: pointer to the file.
 * Return: pointer to a new buffer.
 */

char *create_file(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * close_file - a function that closes a file.
 * @f: file to be close.
 */

void close_file(int f)
{
	int i;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", f);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: nb of arguments.
 * @argv: arg vector.
 * Description: copies a file to another file.
 * Return: 0 On Sucess.
 */

int main(int argc, char *argv[])
{
	int org, dst, r, w;
	char *buffer;

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exi(97);
	}
	buffer = create_buffer(argv[2]);
	org = open(argv[1], O_RDONLY);
	r = read(org, buffer, 1024);
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (org == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(dst, buffer, r);
		if (dst == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(org, buffer, 1024);
		dst = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(org);
	close_file(dst);
	return (0);
}
