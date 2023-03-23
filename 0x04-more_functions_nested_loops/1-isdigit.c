/**
 * _isdigit - check if i is digit
 *
 * @i: input for function
 *
 * Return: 0 if False , 1 otherwise
 */

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
