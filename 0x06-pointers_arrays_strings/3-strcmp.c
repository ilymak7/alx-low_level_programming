/**
 * _strcmp - compare two strings
 *
 * @s1: string 1 input
 * @s2: string 2 input
 *
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
		i++;
	}
	return (j);
}
