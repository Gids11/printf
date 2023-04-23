#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* if needed, will handle standard I/O */
#include <stdlib.h> /* handles utily functions, malloc, conversion, etc */
#include <limits.h> /* handles predefined limits of various data types */
#include <stdarg.h> /*handles all variadic functions */
#include <unistd.h> /* handles the write function used for displaying data*/

/**
 * struct arguments - A structure for all formats of arguments
 * @symbol: the operator of the struct
 * @f: functions in the struct
 */

struct arguments
{
	char *symbol;
	int (*f)(va_list);
};
typedef struct arguments arguments_t;

/* Functions*/
int _putchar_(char c);
int _printf(const char *format, ...); /* for task 0 */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_float(va_list);
int print_percent(va_list);
int print_octal(va_list list);
int print_binary(va_list);
int print_hex(va_list list);
int print_HEX(va_list list);

#endif /* MAIN_H */
