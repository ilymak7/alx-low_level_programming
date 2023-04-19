#include <stddef.h>


/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 *
 * @array: array to iterate through
 * @size: size of array
 * @action: pointer to function to execute
 *
 * Return: None if function and array are empty
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
