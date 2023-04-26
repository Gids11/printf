#include "main.h"
/**
 * _unsigned_int - printing unsinged integer
 * @a: the integer
 *
 * Return: the integer to print
 */
int _unsigned_int(unsigned int a)
{
	int b;
	int c;
	unsigned int d;

	b = 1;
	c = 0;
	d = a;
	for (; d / b > 9; )
		b *= 10;
	for (; b != 0; )
	{
		c += _putchar_('0' + d / b);
		d %= b;
		b /= 10;
	}
	return (c);
}
