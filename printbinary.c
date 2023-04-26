#include "main.h"
/**
 * print_binary - printing a number in binary
 * @list: arguments passed
 * @size: size of  int
 *
 * Return: number printed
 */
int print_binary(va_list list,  int size)
{
	unsigned int a;
	int b, l;
	char *c;
	char *d;
	(void)(size);

	a = va_arg(list, unsigned int);
	if (a == 0)
		return (_putchar_('0'));
	if (a < 1)
		return (-1);
	l = baselength(a, 2);
	c = malloc(sizeof(char) * l + 1);
	if (c == NULL)
		return (-1);
	for (b = 0; a > 0; b++)
	{
		if (a % 2 == 0)
			c[b] = '0';
		else
			c[b] = '1';
		a = a / 2;
	}
	c[b] = '\0';
	d = reversed(c);
	if (d == NULL)
		return (-1);
	_base(d);
	free(c);
	free(d);
	return (l);
}


