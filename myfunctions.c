#include "main.h"
/**
 * print_char - prints only char
 * @list: List a of arguments
 * Return: the print count of chars.
 */

int print_char(va_list list, int size)
{
	char p;

	(void)(size);

	p = va_arg(list, int);

	return (write(1, &p, 1));
}

/**
 * print_string - prints strings
 * @list: List a of arguments
 * Return: the print count of strings.
 */
int print_string(va_list list, int size)
{
	char *ptr = va_arg(list, char*);

	(void)(size);

	if (ptr == NULL)
		ptr = "(null)";
	return (write(1, ptr, strlen(ptr)));
}

/**
 * print_percent - prints percent symbol to std output.
 * @list: List a of arguments
 * Return: the print count of bytes.
 */
int print_percent(va_list list,  int size)
{
	(void)(list);
	(void)(size);

	_putchar_('%');
	return (1);
}
