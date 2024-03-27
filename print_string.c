#include "main.h"

/**
 * print_string - Print a string
 * @separator: The separator string to print before the string
 * @args: A va_list containing the string to print
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

	return(p_len);
}
