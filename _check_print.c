#include "main.h"

/**
 * _check - checks characters printed
 *@c: variable char to check
 *@list: va_list
 *Return: return 0
 */

int _check(va_list list, char c)
{
	char *x = "0123456789abcdef";
	char *X = "0123456789ABCDEF";

	if (c == 'c')
		return (_putchar(va_arg(list, int)));
	else if (c == 's')
		return (_print_str(va_arg(list, char *)));
	else if (c == 'i' || c == 'd')
		return (_print_int(va_arg(list, int)));
	else if (c == 'b')
		return (_print_bin(va_arg(list, unsigned int)));
	else if (c == 'u')
		return (_print_unsigned_int(va_arg(list, unsigned int), 10, "0123456789"));
	else if (c == 'o')
		return (_print_unsigned_int(va_arg(list, unsigned int), 8, "01234567"));
	else if (c == 'x')
		return (_print_unsigned_int(va_arg(list, unsigned int), 16, x));
	else if (c == 'X')
		return (_print_unsigned_int(va_arg(list, unsigned int), 16, X));
	else if (c == 'S')
		return (_print_string(va_arg(list, char*), x, X));
	else if (c == 'p')
		return (_print_pt(va_arg(list, void *)));
	else if (c == '%')
		return (_putchar('%'));
	_putchar('%');
	_putchar(c);
	return (2);
}
