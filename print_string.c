#include "main.h"

/**
 * print_string - Print a string
 * @list: va_list
 * Return: Number of character printed
 */
int print_string(va_list list)
{
	char *p;
	int p_len;

	p_len = 0;

	p = va_arg(list, char*);

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
		p_len++;
	}

	return (p_len);
}
