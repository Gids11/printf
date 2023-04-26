#include "main.h"

int print_HEX(va_list list, int size);
int print_octal(va_list list, int size);
int print_hex(va_list list, int size);
int base_check(int a, char b);

/**
 * print_octal - Prints a number in octal base
 * @list: arguments passed
 * @size: size of integer
 *
 * Return: octal
 */
int print_octal(va_list list, int size)
{
	unsigned int a;
	int b;
	char *c;
	char *d;
	(void)(size);

	a = va_arg(list, unsigned int);

	if (a == 0)
		return (_putchar_('0'));
	if (a < 1)
		return (-1);
	b = baselength(a, 8);

	c = malloc(sizeof(char) * a + 1);
	if (c == NULL)
		return (-1);
	for (b = 0; a > 0; b++)
	{
		c[b] = (a % 8) + 48;
		a = a / 8;

	}
	c[b] = '\0';
	d = reversed(c);
	if (d == NULL)
		return (-1);
	_base(d);
	free(c);
	free(d);
	return (b);
}

/**
 * print_hex - Prints base 16 lowercase
 * @list: arguments passed
 * @size: size of integer
 *
 * Return: characters printed
 */
int print_hex(va_list list, int size)
{
	unsigned int a;
	int b;
	int c;
	char *d;
	char *e;
	(void)(size);

	a = va_arg(list, unsigned int);
	if (a == 0)
		return (_putchar_('0'));
	if (a < 1)
		return (-1);
	b = baselength(a, 16);
	d = malloc(sizeof(char) * b + 1);
	if (d == NULL)
		return (-1);
	for (b = 0; a > 0; b++)
	{
		c = a % 16;
		if (c > 9)
		{
			c = base_check(c, 'b');
			d[b] = c;
		}
		else
			d[b] = c + 48;
		a = a / 16;
	}
	d[b] = '\0';
	e = reversed(d);
	if (e == NULL)
		return (-1);
	_base(e);
	free(d);
	free(e);
	return (b);
}


/**
 * print_HEX - Prints base 16 Uppercase
 * @list: arguments passed
 * @size: integer size
 *
 * Return: characters printed
 */
int print_HEX(va_list list, int size)
{
	unsigned int a;
	int b;
	int c;
	char *d;
	char *e;
	(void)(size);

	a = va_arg(list, unsigned int);
	if (a == 0)
		return (_putchar_('0'));
	if (a < 1)
		return (-1);
	b = baselength(a, 16);
	d = malloc(sizeof(char) * b + 1);
	if (d == NULL)
		return (-1);
	for (b = 0; a > 0; b++)
	{
		c = a % 16;
		if (c > 9)
		{
			c = base_check(c, 'B');
			d[b] = c;
		}
		else
			d[b] = c + 48;
		a = a / 16;
	}
	d[b] = '\0';
	e = reversed(d);
	if (e == NULL)
		return (-1);
	_base(e);
	free(d);
	free(e);
	return (b);
}

/**
 * base_check - to determine which hex function to call
 * @a: Number to change base
 * @b: To decide case of hex
 *
 * Return: Ascii value
 */
int base_check(int a, char b)
{
	char *hex = "abcdef";
	char *HEX = "ABCDEF";

	a = a - 10;
	if (b == 'b')
		return (hex[a]);
	else
		return (HEX[a]);
	return (0);
}
