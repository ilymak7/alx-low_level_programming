#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of the array
 * @cmp: function to check index of array
 *
 * Return: -1 if false, index if true
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool b;

	if (array != NULL && cmp != NULL & size > 0)
	{
		if (size == 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			b = cmp(array[i]);
			if (b == TRUE)
				return (i);
		}
	}
	return (-1);
}
