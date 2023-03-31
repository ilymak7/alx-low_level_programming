/**
 * reverse_array - reverse the content of array
 *
 * @a: array
 * @n: number of element to reverse
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	j = 0;
	k = n - 1;

	while (j < k)
	{
		i = a[j];
		a[j] = a[k];
		a[k] = i;
		j++;
		k--;
	}
}
