/**
 * print_name - function that prints name
 *
 * @name: name to print
 * @f: function pointer
 *
 * Return: Always 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

}
