/**
 * rot13 - function that encodes a string using rot13.
 *
 * @o: input
 *
 * Return: output string
 */

char *rot13(char *o)
{
	int i = 0;

	while (o[i] != '\0')
	{
		if ((o[i] >= 'a' && o[i] <= 'z') ||
				(o[i] >= 'A' && o[i] <= 'Z'))
		{
			while ((o[i] >= 'a' && o[i] <= 'm') ||
					(o[i] >= 'A' && o[i] <= 'M'))
			{
				o[i] += 13;
				i++;
			}
			while ((o[i] >= 'n' && o[i] <= 'z') ||
					(o[i] >= 'N' && o[i] <= 'Z'))
			{
				o[i] -= 13;
				i++;
			}

		}
		else
			i++;
	}
	return (o);

}
