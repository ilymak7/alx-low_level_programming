/**
 * leet - encode a string into 1337
 *
 * @s: string input
 *
 * Return: @s
 */

char *leet(char *s)
{
	int i, c = 0;
	int s_l[] = {97, 101, 111, 116, 108};
	int s_u[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == s_l[i] || s[c] == s_u[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
