#include "main.h"

char *memcpy(char *dest, char *src, unsigned int n);
char *reversed(char *str);
void _base(char *str);
unsigned int baselength(unsigned int num, int base);

/**
 * *memcpy - memory copying function
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 *
 * Return: a pointer to dest
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

/**
 * *reversed - a function that reverses a string
 * @str: the string
 *
 * Return: a pointer to the string
 */
char *reversed(char *str)
{
	int a;
	int b;
	char c;
	char *d;

	for (a = 0; str[a] != '\0'; a++)
	{}
	d  = malloc(sizeof(char) * a + 1);
		if (d == NULL)
			return (NULL);
		memcpy(d, str, a);
		for (b = 0; b < a; b++, a--)
		{
			c = d[a - 1];
			d[a - 1] = d[b];
			d[b] = c;
		}
		return (d);
}

/**
 * _base - prints certain base
 * @str: string to print from
 */
void _base(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
_putchar_(str[a]);
}

/**
 * baselength - gets length of an octal number
 * @num: the number to get length
 * @base: the base
 *
 * Return: the length
 */
unsigned int baselength(unsigned int num, int base)
{
	unsigned int a;

	for (a = 0; num > 0; a++)
	{
		num = num / base;
	}
	return (a);
}
