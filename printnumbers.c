#include "main.h"
/**
 * find_the_size - Calculates the size to cast the argument
 * @i: List of arguments to be printed.
 * @format: Formatted string in which to print the arguments
 * @a: a pointer to the current loop value of the format.
 * Return: size of num - as specified by precision.
 */
int find_the_size(int *a, const char *format)
{
	int sizeofnum = 0;

	if (format[*a + 1] == 'h')
		sizeofnum = (SIZEOF_SHORT);
	else if (format[*a + 1] == 'l')
		sizeofnum = (SIZEOF_LONG);

	if (sizeofnum != 0)
		*a += 1;

	return (sizeofnum);
}

/**
 * format_size - Casts a number to the specified size
 * @value: Number to be casted.
 * @size: The size to casted value to.
 *
 * Return: type casted value of value
 */
long int format_size(int size, long int value)
{
	if (size == SIZEOF_SHORT)
		return ((short)value);
	else if (size == SIZEOF_LONG)
		return (value);

	return ((int)value);
}

/**
 * print_integer - Print int
 * @list: List of variadic arguments passed
 * @size: the required size of int argument
 * Return: The printed number of chars.
 */
int print_integer(va_list list, int size)
{
	char buffer[BUFF_SIZE];
	char *k;
	int i = BUFF_SIZE - 2;
	int negative = 0;
	long int n = va_arg(list, long int);
	unsigned long int m;

	n = format_size(size, n);

	if (n == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	m = (unsigned long int)n;

	if (n < 0)
	{
		m = (unsigned long int)((-1) * n);
		negative = 1;
	}

	while (m)
	{
		buffer[i--] = (m % 10) + '0';
		m = m / 10;
	}

	if (negative)
	{
		buffer[i] = '-';
		k = &buffer[i];
	}
	else
		k = &buffer[i + 1];
	return (write(1, k, strlen(k)));
}

