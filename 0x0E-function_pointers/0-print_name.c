/**
 * print_name - prints a name
 * @name: name to print
 * @f: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
