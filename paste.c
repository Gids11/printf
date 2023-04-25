#include "main.h"

/**
 * paste - A function that receives all parameters to print a formatted string
 *@format: string containing all needed parameters
 *@f_list: list of functions
 *@arg_list: list of arguments passed to the function
 *
 * Return: All parameters printed
 */

int paste(const char *format, arguments_t f_list[], va_list arg_list)
{
int a, b, size, r_val, pasted_chars;

pasted_chars = 0;
for (a = 0; format[a] != '\0'; a++)
{
	if (format[a] == '%')
	{
		size = find_the_size(&a, format);

		for (b = 0; f_list[b].symbol != NULL; b++)
		{
			if (format[a + 1] == f_list[b].symbol[0])
			{
				r_val = f_list[b].f(arg_list, size);
				if (r_val == -1)
					return (-1);
				pasted_chars += r_val;
				break;
			}
		}
		if (f_list[b].symbol == NULL && format[a + 1] != ' ')
		{
			if (format[a + 1] != '\0')
			{
				_putchar_(format[a]);
				_putchar_(format[a + 1]);
				pasted_chars = pasted_chars + 2;
			}
			else
				return (-1);
			}
			a = a + 1;
	}

	else
	{
		_putchar_(format[a]);
		pasted_chars++;
	}
}
	return (pasted_chars);
}
