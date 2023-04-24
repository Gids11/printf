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
		{"i", print_integer},
		{"d", print_interger},
		{"s", print_string},
		{"x", print_hex},
		{"X", print_HEX},
		{"o", print_octal},
		{"u", print_unsigned_integer},
		{"%", print_percent},
		{"b", print_binary},
		{"R", print_rot13},
		{"r", print_reversed_string},
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
