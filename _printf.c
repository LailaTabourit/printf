#include "main.h"

/**
* _printf - prints formatted strings and inputs into the standard output
* @format: format of string
*
* by: Lailitaaa & Megaa
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int cmp = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			format++;
			if (format[i] == '\0')
				return (-1);
			cmp += _check(args, format[i]);
		}
		else
			cmp += _putchar(format[i]);
		format++;
	}
	va_end(args);
	return (cmp);
}
