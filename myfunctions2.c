#include "main.h"
/**
 * print_string_S - Prints ascii codes in hexa of non printable chars
 * @size: the required size of int argument
 * @list: lists of arguments passed
 * Return: Number of chars printed
 *
 * Description: Non printable characters (0 < ASCII value < 32
 * or >= 127) are printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 */

int print_string_S(va_list list, int size)
{
	int  j = 0, i = 0;
	char *p = va_arg(list, char *), correctchar[] = "0123456789ABCDEF";
	char buffer[BUFF_SIZE];

	(void)(size);

	if (p == NULL)
		return (write(1, "(null) : 'S' will print '(null)'", 6));

	while (*(p + i) != '\0')
	{
		if ((p[i] < 127) && (p[i] >= 32))
			buffer[j] = p[i];
		else
		{
			if (*(p + i) < 0)
				p[i] *= -1;

			buffer[j++] = '\\';
			buffer[j++] = 'x';

			buffer[j++] = correctchar[p[i] / 16];
			buffer[j] = correctchar[p[i] % 16];
		}

		i++;
		j++;
	}

	buffer[j] = '\0';

	return (write(1, buffer, j));
}

