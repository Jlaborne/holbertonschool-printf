#include "main.h"

/**
 * _printf -  prints a char string to stdout
 * @format: the string to print
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int size;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	size = print_all(format, args);

	va_end(args);

	return (size);
}
