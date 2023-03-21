#include"main.h"

/**
 * _isalpha - check if c is lowercase
 *
 * @c: input of the function
 *
 * Return: 1 if c is alphabet
 *	otherwise 0
*/

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
