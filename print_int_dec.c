#include "main.h"
/**
 * print_int_dec - Print a number in base 10
 * @list: Number to print in base 10
 * Return: Number of characters printed
 **/
int print_int_dec(va_list list)
{
	int value;
	unsigned int abs, a, len;
	unsigned int countn = 1;

	len = 0;
	value = va_arg(list, int);

	if (value < 0)
	{
		len = len + 1;
		_putchar('-');
		abs = value * -1;
	}
	else
		abs = value;

	a = abs;

	while (a > 9)
	{
		a = a / 10;
		countn = countn * 10;
	}
	while (countn >= 1)
	{
		len = len + 1;
		_putchar(((abs / countn) % 10) + '0');
		countn = countn / 10;
	}

	return (len);
}
