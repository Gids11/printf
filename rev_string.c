#include "main.h"
/**
 * print_reversed_string - a function that prints a string in reverse
 * @list: argument passed
 *
 * Return: printed characters
 */
int print_reversed_string(va_list list, int size)
{
	int a;
	char *b;
	char *c;

	(void)(size);
	b = va_arg(list, char *);
	if (b == NULL)
		return (-1);
	c = reversed(b);
	if (c == NULL)
		return (-1);
	for (a = 0; c[a] != '\0'; a++)
		_putchar_(c[a]);
	free(c);
	return (a);
}
