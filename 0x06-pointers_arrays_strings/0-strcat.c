/**
 * _strcat - concatenate two strings
 *
 * @dest: destination input
 * @src: src input
 *
 * Return: resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
