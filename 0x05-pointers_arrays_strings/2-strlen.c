/**
 * _strlen - length of string
 *
 * @m : input
 *
 * Return: length of string
 */

int _strlen(char *m)
{
	int tmp;

	for (tmp = 0; *m != '\0'; ++m)
		++tmp;
	return (tmp);

}
