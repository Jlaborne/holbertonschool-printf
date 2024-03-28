#include "main.h"
#include <limits.h>
/**
 * print_integer - Print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: Length of numbers in decimal
 **/
int print_integer(va_list list)
{
	int num = va_arg(list, int);
	char buffer[40];
	char *ptr = buffer;
	int size = 0;
	char *p;

	if (INT_MIN > num || num > INT_MAX)
		return(-1);

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	else if (num == 0)
	{
		_putchar('0');
		size++;
		return (1);
	}

	while (num > 0)
	{
		*ptr++ = '0' + (num % 10);
		num /= 10;
		size++;
	}

	for (p = buffer + size - 1; p >= buffer && *p != '\0'; p--)
	{
		_putchar(*p);
	}
	return (size);
}
