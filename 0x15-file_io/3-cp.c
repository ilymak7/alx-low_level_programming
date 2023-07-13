#include "main.h"

/**
 * main - copy a file content to another
 * @argc: args count
 * @argv: args vect.
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int f1, f2, l1, l2, r;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((r = read(f1, buffer, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buffer, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	l1 = close(f1);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
	}
	l2 = close(f2);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2), exit(100);
	}
	return (0);
}
