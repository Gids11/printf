#include "main.h"
/**
 * print_rot13 - prints rot13 from string
 * @list: spring to print from
 *
 * Return: the rot13
 */
int print_rot13(va_list list, int size)
{
	int a, b;
	char *c;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	(void)(size);
	c = va_arg(list, char *);
	if (c == NULL)
		return (-1);
	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (c[a] == d[b])
			{
				_putchar_(e[b]);
				break;
			}
		}
		if (b == 53)
			_putchar_(c[a]);
	}
	return (a);
}
