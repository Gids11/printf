#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: A string with needed parameters
 *
 * Return: printed parametere
 */
int _printf(const char *format, ...)
{
	int pasted_chars;
	arguments_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	pasted_chars = paste(format, f_list, arg_list);
	va_end(arg_list);
	return (pasted_chars);
}
