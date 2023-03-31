/**
 * _strncpy - copy a string
 *
 * @dest: destination input
 * @src: src input
 * @n: most n
 *
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
