
/**
  * print_name- prints a name
  * @f: function pointer
  * @name: the name to be printed
  * Return: no return
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
