#include "main.h"

/**
 * print_unsigned_integer - printing unsigned integer
 * @size: the unsigned integer to print size
 * @list: argument list
 *
 * Return: printed integer
 */
int print_unsigned_integer(va_list list, int size)
{
	unsigned int a;
	(void)(size);

	a =  va_arg(list, unsigned int);
	if (a == 0)
		return (_unsigned_int(a));
	if (a < 1)
		return (-1);
	return (_unsigned_int(a));
}
