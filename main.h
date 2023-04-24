#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* if needed, will handle standard I/O */
#include <stdlib.h> /* handles utily functions, malloc, conversion, etc */
#include <limits.h> /* handles predefined limits of various data types */
#include <stdarg.h> /*handles all variadic functions */
#include <unistd.h> /* handles the write function used for displaying data*/
#include <string.h> /* string headers files */
/**
 * struct arguments - A structure for all formats of arguments
 * @symbol: the operator of the struct
 * @f: functions in the struct
 */

/* SIZE MACROS */
#define SIZEOF_SHORT 1
#define SIZEOF_LONG 2
#define BUFF_SIZE 1024

struct arguments
{
	char *symbol;
	int (*f)(va_list list);
};
typedef struct arguments arguments_t;

/* Functions*/
int _putchar_(char c);
int _printf(const char *format, ...);
int print_string(va_list list);
int print_char(va_list list);
int print_integer(va_list list);
int print_number(va_list list);
int print_float(va_list list);
int print_percent(va_list list);
int print_octal(va_list list);
int print_binary(va_list);
int print_unsigned_integer(va_list list);
int print_rot13(va_list list);
int print_reversed_string(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);
int paste(const char *format, arguments_t f_lists[], va_list arg_list);
void _base(char *str);
unsigned int baselength(unsigned int num, int base);
char *reversed(char *str);
char *memcpy(char *dest, char *src, unsigned int n);

#endif /* MAIN_H */
