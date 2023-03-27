/**
 * swap_int - swap pointers
 *
 * @m : input
 * @n : input
 *
 * Return : Void
 */

void swap_int(int *n, int *m)
{
	int tmp;

	tmp = *n;
	*n = *m;
	*m = tmp;
}
