#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char);

int print_all(const char *str, va_list list);
int percent_call(const char *, va_list, int *);

int print_char(va_list);
int print_string(va_list);
int print_int_dec(va_list);

/**
 * struct _format - Typedef struct
 *
 * @_char: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char _char;
	int (*f)(va_list);
} format;

#endif
