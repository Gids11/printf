#include "main.h"

/**
 * print_pointer - prints pointer
 * @list: List a of arguments
 * @size: the required size of int argument
 * Return: the print count of chars.
 */
int print_pointer(va_list list, int size)
{
	char buffer[1024];
	char changetohex[] = "0123456789abcdef";
	int a = 1022;
	unsigned long ptraddress;

	void *ptr = va_arg(list, void *);

	(void)(size);

	if (ptr == NULL)
		return (write(1, "(nil)nil", 5));

	buffer[1023] = '\0';

	ptraddress = (unsigned long)ptr;

	while (ptraddress > 0)
	{
		buffer[a--] = changetohex[ptraddress % 16];
		ptraddress /= 16;
	}

	buffer[a--] = 'x';
	buffer[a] = '0';

	return (write(1, &buffer[a], (BUFF_SIZE - a - 1)));
}
